#ifndef S21_CALC_H
#define S21_CALC_H
#include "s21_validator.h"

void AddTmp(lexem *tmp, int type, int prior, double val);
void ReadSign(char c, lexem *tmp);
void ReadSkob(char c, lexem *tmp);
void ReadFunction(char *expression, int *k, lexem *tmp);
void ReadLexem(char *expression, int *k, lexem *tmp);
void ReadNumber(char *expression, int *k, lexem *tmp, double value);
void ReadExpression(char *expression, double value, lexem **parser);
void inversstack(lexem **a, lexem **b);
void RPN_skob(lexem **a, lexem **b, lexem **c);
void RPN(lexem **parser, lexem **polish);
void calculate(lexem **polish, double *result);
int CalcFunction(double v1, double *res, int type);
int CalcSign(double v1, double v2, double *res, int type);
double s21_calc(char *expression, double val);

#endif  // S21_CALC_H
