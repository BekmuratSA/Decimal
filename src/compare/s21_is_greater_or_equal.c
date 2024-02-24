#include "../s21_decimal.h"

int s21_is_greater_or_equal(s21_decimal left, s21_decimal right) {
  // возвращает 1 (истина), если left >= right
  // иначе, 0 (ложь)
  return (s21_is_greater(left, right) || s21_is_equal(left, right));
}