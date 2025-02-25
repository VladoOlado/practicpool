
#include <stdio.h>

int main(void) {
    float x, y = 0;
    if (scanf("%f%f", &x, &y) != 2) {
        printf("n/a\n");
        return 1;
    } else {
        if (x * 2 + y * 2 < 25) {
            printf("GOTCHA");  // взлом жопы
        } else if (x * 2 + y * 2 >= 25) {
            printf("MISS");
        }
        return 0;
    }
}