#ifndef S21_STACK_H
#define S21_STACK_H
#include <math.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef enum {
  NUM_L = 1,
  X_L = 2,
  PLUS_L = 3,
  MINUS_L = 4,
  DIV_L = 5,
  MULT_L = 6,
  POW_L = 7,
  MOD_L = 8,
  SIN_L = 9,
  COS_L = 11,
  TAN_L = 12,
  ATAN_L = 13,
  ACOS_L = 14,
  ASIN_L = 15,
  SQRT_L = 16,
  LN_L = 17,
  LOG_L = 18,
  L_L = 19,
  L_R = 20
} type_lexem;

typedef struct cell {
  double value;
  int priority;  // 0 - x/num, 1 - +/-, 2 - */div/mod, 3 - ^, 4 - funct, 5-skob
  struct cell *next;
  type_lexem type;
} lexem;

void push_stack(lexem **head, double val, int type, int priot);
void pop_stack(lexem **head);
lexem top_stack(lexem **head);

#endif  // S21_STACK_H
