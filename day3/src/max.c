#include <stdio.h>

int maxint(int a, int b) {
    if (a > b) {
        return a;
    } else if (a < b) {
        return b;
    } else {
        return 1;
    }
}

int main(void) {
    int a, b = 0;
    printf("Введите два числа\n");

    if (scanf("%d %d", &a, &b) != 2) {
        printf("n/a\n");  // проверка на ввод целых чисел, в сканф аргумент стоит на считывание 2 целых числа,
                          // если что то считается не корректным, выполнится условие и программа схолпнется
        return 1;
    }

    printf("%d\n", maxint(a, b));
    return 0;
}