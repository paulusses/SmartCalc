#include <check.h>
#include <stdio.h>
#include <stdlib.h>

#include "s21_calc.h"
#include "s21_stack.h"
#include "s21_validator.h"

START_TEST(calc_test) {
  {
    char src[100] = "4^acos(x/4)/tan(2*x)";
    double x_text = 1.2;
    if (validator(src)) {
      double result = s21_calc(src, x_text);
      double real_result = -6.31492;
      ck_assert_msg(fabs(result) - fabs(real_result) <= 0.00001,
                    "test-1 failed");
    } else {
      printf("test-1 failed\n");
    }
  }

  {
    char src[100] = "x+x";
    double x_text = 2;
    if (validator(src)) {
      double result = s21_calc(src, x_text);
      double real_result = 4;
      ck_assert_msg(fabs(result) - fabs(real_result) <= 0.00001,
                    "test-2 failed");
    } else {
      printf("test-2 failed\n");
    }
  }
  {
    char src[100] = "123+0.456";
    double x_text = 0;
    if (validator(src)) {
      double result = s21_calc(src, x_text);
      double real_result = 123.456;
      ck_assert_msg(fabs(result) - fabs(real_result) <= 0.00001,
                    "test-3 failed");
    } else {
      printf("test-3 failed\n");
    }
  }
  {
    char src[100] = "log(x)";
    double x_text = -2;
    if (validator(src)) {
      double result = s21_calc(src, x_text);
      double real_result = NAN;
      ck_assert_msg(result != result && real_result != real_result,
                    "test-4 failed");
    } else {
      printf("test-4 failed\n");
    }
  }
  {
    char src[100] = "-(-1)";
    if (validator(src)) {
      double result = s21_calc(src, 0);
      double real_result = 1;
      ck_assert_msg(result == real_result, "test-5 failed");
    } else {
      printf("test-5 failed");
    }
  }
  {
    char src[100] = "cos(10mod2.2)";
    if (validator(src)) {
      double result = s21_calc(src, 0);
      double real_result = 0.362358;
      ck_assert_msg(fabs(result) - fabs(real_result) <= 0.00001,
                    "test-6 failed");
    } else {
      printf("test-6 failed");
    }
  }
  {
    char src[100] = "-(o(i(a(10.01)*n(2))/10m2))^q(5)";
    int result = validator(src);
    ck_assert_msg(!result, "test-7 failed");
  }
  {
    char src[100] = ")(s(x)";
    int result = validator(src);
    ck_assert_msg(!result, "test-8 failed");
  }
}
END_TEST

int main(void) {
  Suite *s1 = suite_create("Core");
  TCase *tc1_1 = tcase_create("Core");
  SRunner *sr = srunner_create(s1);
  int nf;

  suite_add_tcase(s1, tc1_1);
  tcase_add_test(tc1_1, calc_test);

  srunner_run_all(sr, CK_ENV);
  nf = srunner_ntests_failed(sr);
  srunner_free(sr);

  return nf == 0 ? 0 : 1;
}