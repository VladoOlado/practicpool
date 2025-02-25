#include <math.h>
#include <stdio.h>

int main(void) {
    float x = 0;

    if (scanf("%f", &x) != 1) {
        printf("n/a\n");
        return 1;
    } else {
        printf("\n%.1f", 7e-3 * pow(x, 4) + ((22.8 * pow(x, (1 / 3)) - 1e3) * x + 3) / (x * x / 2) -
                             x * pow((10 + x), (2 / x)) - 1.01);
        return 0;
    }
}