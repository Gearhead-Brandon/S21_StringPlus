#include "s21_string.h"

int s21_strncmp(const char *str1, const char *str2, s21_size_t n) {
  int result = 0;
  for (s21_size_t i = 0; i < n; ++i) {
    if (str1[i] == '\0' || str1[i] != str2[i]) {
      result = str1[i] -
               str2[i];  // Записываем разницу ASCII-кодов символов в результат
      break;  // Прерываем цикл, так как найдено первое отличие
    }
  }
  return result;
}
