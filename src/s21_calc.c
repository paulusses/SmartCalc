#include "s21_calc.h"

void AddTmp(lexem *tmp, int type, int prior, double val) {
  tmp->type = type;
  tmp->value = val;
  tmp->priority = prior;
}

void ReadSign(char c, lexem *tmp) {
  if (c == '+')
    AddTmp(tmp, PLUS_L, 1, 0);
  else if (c == '/')
    AddTmp(tmp, DIV_L, 2, 0);
  else if (c == '*')
    AddTmp(tmp, MULT_L, 2, 0);
  else if (c == '^')
    AddTmp(tmp, POW_L, 3, 0);
}

void ReadSkob(char c, lexem *tmp) {
  if (c == ')') {
    AddTmp(tmp, L_R, -1, 0);
  } else if (c == '(') {
    AddTmp(tmp, L_L, -1, 0);
  }
}

void ReadFunction(char *expression, int *k, lexem *tmp) {  // CLOWN FUNCTION
  if (expression[*k] == 's') {
    if (expression[*k + 1] == 'i') {
      AddTmp(tmp, SIN_L, 4, 0);
      *k += 2;
    } else if (expression[*k + 1] == 'q') {
      AddTmp(tmp, SQRT_L, 4, 0);
      *k += 3;
    }
  } else if (expression[*k] == 'c') {
    AddTmp(tmp, COS_L, 4, 0);
    *k += 2;
  } else if (expression[*k] == 'a') {
    if (expression[*k + 1] == 's') {
      AddTmp(tmp, ASIN_L, 4, 0);
      *k += 3;
    } else if (expression[*k + 1] == 'c') {
      AddTmp(tmp, ACOS_L, 4, 0);
      *k += 3;
    } else if (expression[*k + 1] == 't') {
      AddTmp(tmp, ATAN_L, 4, 0);
      *k += 3;
    }
  } else if (expression[*k] == 't') {
    AddTmp(tmp, TAN_L, 4, 0);
    *k += 2;
  } else if (expression[*k] == 'l') {
    if (expression[*k + 1] == 'n') {
      AddTmp(tmp, LN_L, 4, 0);
      *k += 1;
    } else if (expression[*k + 1] == 'o') {
      AddTmp(tmp, LOG_L, 4, 0);
      *k += 2;
    }
  } else if (expression[*k] == 'm') {
    AddTmp(tmp, MOD_L, 2, 0);
    *k += 2;
  }
}

void ReadLexem(char *expression, int *k, lexem *tmp) {
  if (strchr(")(", expression[*k]))
    ReadSkob(expression[*k], tmp);
  else if (strchr("^+/*", expression[*k]))
    ReadSign(expression[*k], tmp);
  else if (strchr("sctlam", expression[*k]))
    ReadFunction(expression, k, tmp);
}

void ReadNumber(char *expression, int *k, lexem *tmp, double value) {
  char buf[256] = {0};
  int num = 1;
  int i = 0;
  while (num) {
    if (is_num(expression[*k + i]) || expression[*k + i] == '.') {
      buf[i] = expression[*k + i];
      i++;
    } else {
      num = 0;
    }
  }
  *k += (i - 1);
  if (buf[0] != 'x') {
    double val = 0;
    sscanf(buf, "%lf", &val);
    AddTmp(tmp, NUM_L, 0, val);
  } else {
    AddTmp(tmp, X_L, 0, value);
  }
}

// strchr pomenyal mestami
// i++ and buf mestami

void ReadExpression(char *expression, double value, lexem **parser) {
  int i = 0;
  int len = strlen(expression);
  while (i < len && expression[i] != '=' && expression[i] != '\0') {
    lexem tmp = {0};
    if (is_num(expression[i])) {
      ReadNumber(expression, &i, &tmp, value);
    } else if (expression[i] == '-') {
      if (i == 0 || expression[i - 1] == '(' || !is_num(expression[i - 1])) {
        lexem tmp2 = {0};
        AddTmp(&tmp2, NUM_L, 0, 0);
        push_stack(parser, tmp2.value, tmp2.type, tmp2.priority);
        /* pop_stack(&tmp2);*/
      }
      AddTmp(&tmp, MINUS_L, 1, 0);
    } else {
      ReadLexem(expression, &i, &tmp);
    }
    push_stack(parser, tmp.value, tmp.type, tmp.priority);
    i++;
  }
}

void inversstack(lexem **a, lexem **b) {
  while (*a) {
    push_stack(b, (*a)->value, (*a)->type, (*a)->priority);
    pop_stack(a);
  }
}

void RPN_skob(lexem **a, lexem **b, lexem **c) {
  int skob = 1;
  push_stack(c, (*a)->value, (*a)->type, (*a)->priority);
  pop_stack(a);
  while (skob) {
    if ((*a)->type <= 2) {
      push_stack(b, (*a)->value, (*a)->type, (*a)->priority);
      pop_stack(a);
    } else if ((*a)->type > 2 && (*a)->type < 19) {
      if ((*c)->next && (*a)->priority <= (*c)->priority &&
          (*c)->next->type != 19) {
        push_stack(b, (*c)->value, (*c)->type, (*c)->priority);
        pop_stack(c);
      } else {
        push_stack(c, (*a)->value, (*a)->type, (*a)->priority);
        pop_stack(a);
      }
    } else if ((*a)->type == 19) {
      RPN_skob(a, b, c);
    } else {
      skob = 0;
      pop_stack(a);
    }
  }

  while ((*c) && (*c)->type != 19) {
    push_stack(b, (*c)->value, (*c)->type, (*c)->priority);
    pop_stack(c);
  }
  pop_stack(c);
}

void RPN(lexem **parser, lexem **polish) {
  lexem *ready = {0};
  lexem *funct = {0};
  inversstack(parser, &ready);
  while (ready) {
    if (ready->type == NUM_L || ready->type == X_L) {
      push_stack(polish, ready->value, ready->type, ready->priority);
      pop_stack(&ready);
    } else if (ready->type == L_L) {
      RPN_skob(&ready, polish, &funct);
    } else if (ready->type > 2 && ready->type < 19) {
      if (funct && ready->priority <= funct->priority) {
        push_stack(polish, funct->value, funct->type, funct->priority);
        pop_stack(&funct);
      } else {
        push_stack(&funct, ready->value, ready->type, ready->priority);
        pop_stack(&ready);
      }
    }
  }
  while (funct) {
    push_stack(polish, funct->value, funct->type, funct->priority);
    pop_stack(&funct);
  }
}

void calculate(lexem **polish, double *result) {
  lexem *HELP = {0};
  lexem *PolishNew = {0};
  inversstack(polish, &PolishNew);
  while (PolishNew) {
    int type = PolishNew->type;
    if (PolishNew->type <= 2) {
      push_stack(&HELP, PolishNew->value, 0, 0);
      pop_stack(&PolishNew);
    } else {
      double res = 0;
      if (type <= 8) {
        double v1 = HELP->value;
        pop_stack(&HELP);
        double v2 = HELP->value;
        pop_stack(&HELP);
        if (CalcSign(v1, v2, &res, type)) {
          push_stack(&HELP, res, 0, 0);
          pop_stack(&PolishNew);
        } else {
          // calclulate error
        }
      } else {
        double v1 = HELP->value;
        pop_stack(&HELP);
        if (CalcFunction(v1, &res, type)) {
          push_stack(&HELP, res, 0, 0);
          pop_stack(&PolishNew);
        } else {
          // calculate error
        }
      }
    }
  }
  *result = HELP->value;
  pop_stack(&HELP);
}

int CalcFunction(double v1, double *res, int type) {
  if (type == 9) {
    *res = sin(v1);
  } else if (type == 11) {
    *res = cos(v1);
  } else if (type == 12) {
    *res = tan(v1);
  } else if (type == 13) {
    *res = atan(v1);
  } else if (type == 14) {
    *res = acos(v1);
  } else if (type == 15) {
    *res = asin(v1);
  } else if (type == 16) {
    *res = sqrt(v1);
  } else if (type == 17) {
    *res = log(v1);
  } else if (type == 18) {
    *res = log10(v1);
  }
  return 1;  // proverku sdelat
}

int CalcSign(double v1, double v2, double *res, int type) {
  if (type == 3) {
    *res = v2 + v1;
  } else if (type == 4) {
    *res = v2 - v1;
  } else if (type == 5) {
    *res = v2 / v1;
  } else if (type == 6) {
    *res = v2 * v1;
  } else if (type == 7) {
    *res = pow(v2, v1);
  } else if (type == 8) {
    *res = fmod(v2, v1);
  }
  return 1;  // proverku sdelat
}

double s21_calc(char *expression, double x) {
  lexem *parser = NULL;
  ReadExpression(expression, x, &parser);
  double val = 0;
  lexem *polska = NULL;
  RPN(&parser, &polska);
  calculate(&polska, &val);
  return val;
}
