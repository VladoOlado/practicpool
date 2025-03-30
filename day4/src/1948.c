#include <stdio.h>

// Объявление функции
int simplenum(int n);
int large_num(int l);

int main() {
  int num = 0;
  printf("Введите число: ");

  // Проверка ввода
  if (scanf("%d", &num) != 1) {
    printf("n/a\n"); // Выводим "n/a" при неправильном вводе
    return 1; // Завершаем программу с кодом ошибки
  }

  // Проверка на ноль
  if (num == 0) {
    printf("n/a\n");
    return 1;
  }

  // Если число отрицательное, делаем его положительным
  if (num < 0) {
    num = num * -1;
  }

  int result = large_num(num);
  if (result != -1) {
    printf("Наибольший простой делитель числа %d равен %d.\n", num, result);
  } else {
    printf("простой делитель числа %d не найден \n", num);
  }

  return 0; // Успешное завершение программы
}

// Функция для проверки, является ли число простым
int simplenum(int n) {
  if (n < 2) {
    return -1; // Число не простое
  }
  for (int i = 2; i < n; i++) {
    int temp = n;
    while (temp >= i) {
      temp -= i;
    }
    if (temp == 0) {
      return 0; // Число не простое
    }
  }
  return 1; // Число простое
}

int large_num(int l) {
  if (simplenum(l)) {
    return l;
  }

  for (int x = l - 1; x > 1; x--) {
    int temp = l;
    while (temp >= x) {
      temp -= x;
    }
    if (temp == 0) {
      if (simplenum(x)) { // Проверка на простату
        return x; // Найден наибольший простой делитель
      }
    }
  }
  return -1; // Если простой делитель не найден
}
