#include "s21_validator.h"

void delete_space(char *expression, char *expr) {
  int i, j;
  for (i = j = 0; expression[i] != '\0'; i++)
    if (expression[i] != ' ') expr[j++] = expression[i];
  expr[j] = '\0';
}

int is_num(char s) { return ((s > 47 && s < 58) || s == 'x'); }

int check_function(char *exression, int k) {
  int fail = 0;
  char buf[5] = {0};
  char funct[10][8] = {"mod",  "ln(",   "sin(",  "cos(",  "tan(",
                       "log(", "sqrt(", "asin(", "acos(", "atan("};
  for (int c = 0; c < 5; c++) buf[c] = exression[c + k];
  int i = 0;
  for (; i < 10; i++) {
    if (strstr(buf, funct[i]) == buf) {
      fail = 1;
      break;
    }
  }
  if (k != 0 && !check_minus(exression, k - 1) && i != 0 &&
      !check_flags(exression, k - 1) && exression[k - 1] != '(' &&
      exression[k - 1] != 'd')
    fail = 0;

  if (fail) {
    if (i == 0) {
      if (k != 0 && exression[k - 1] && (exression[k + 3])) {
        fail = 2;
      } else {
        fail = 0;
      }
    } else if (i == 1) {
      fail = i;
    } else if (i >= 2 && i <= 5) {
      fail = 2;
    } else if (i > 5) {
      fail = 3;
    }
  }
  return fail;
}

int check_minus(char *expression, int k) {
  return (expression[k] == '-' && !check_flags(expression, k + 1));
}

int check_flags(char *exression, int k) {
  char sign[4] = "+/*^";
  int fail = 0;
  if (strchr(sign, exression[k]) &&
      (is_num(exression[k - 1]) || exression[k - 1] == ')'))
    if (!check_flags(exression, k + 1)) fail = 1;
  return (fail && exression[k + 1]);
}

int check_number_x(char *number, double *num_x) {
  int fail = 1;
  if (number[0] == '\0') fail = 0;
  int i = 0;
  while (fail && number[i]) {
    if (is_num(number[i])) {
      fail = 1;
    } else if (number[i] == '.' && is_num(number[i - 1]) &&
               is_num(number[i + 1])) {
      if (number[i - 1] != 'x' && number[i + 1] != 'x')
        fail = 1;
      else
        fail = 0;
    } else {
      fail = 0;
    }
    i++;
  }
  if (fail) {
    sscanf(number, "%lf", num_x);
  }
  return fail;
}

int validator(char *expr) {
  char expression[256] = {0};
  delete_space(expr, expression);
  int fail = 1;
  if (expression[0] == '\0') fail = 0;
  int i = 0;
  int skob = 0;
  while (expression[i] && fail == 1) {
    if (is_num(expression[i]))
      fail = 1;
    else if (expression[i] == '.' && i != 0 && is_num(expression[i - 1]) &&
             is_num(expression[i - 1]) != 'x' && is_num(expression[i + 1])) {
      fail = 1;
    } else if (expression[i] == '=' && i != 0 &&
               (is_num(expression[i - 1]) || expression[i - 1] == ')') &&
               expression[i + 1] == '\0') {
      fail = 1;
    } else if (check_function(expression, i)) {
      i += check_function(expression, i);
      fail = 1;
    } else if (check_flags(expression, i)) {
      fail = 1;
    } else if (check_minus(expression, i)) {
      fail = 1;
    } else if (expression[i] == '(') {
      skob++;
      fail = 1;
    } else if (expression[i] == ')' && i != 0 &&
               (is_num(expression[i - 1]) || expression[i - 1] == ')')) {
      skob--;
      fail = 1;
    } else {
      fail = 0;
    }
    if (skob < 0) fail = 0;
    i++;
  }
  if (skob != 0) fail = 0;

  return fail;
}
