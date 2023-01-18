#ifndef S21_VALIDATOR_H
#define S21_VALIDATOR_H
#include "s21_stack.h"

void delete_space(char *expression, char *expr);
int check_function(char *exression, int k);
int is_num(char s);
int check_minus(char *expression, int k);
int check_flags(char *exression, int k);
int check_number_x(char *number, double *num_x);
int validator(char *expr);

#endif  // S21_VALIDATOR_H
