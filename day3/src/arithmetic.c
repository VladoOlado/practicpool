#include <stdio.h>

int main(void) {
    int a, b = 0;
    printf("Введите два числа\n");

    if (scanf("%d %d", &a, &b) != 2) {
        printf("n/a\n");  // проверка на ввод целых чисел, в сканф аргумент стоит на считывание 2 целых числа,
                          // если что то считается не корректным, выполнится условие и программа схолпнется
        return 1;
    }

    printf("%d %d %d", a + b, a - b, a * b);
    if (b == 0) {
        printf(" n/a\n");
    } else {
        printf(" %d\n", a / b);
    }

    return 0;
}
