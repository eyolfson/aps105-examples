#include <math.h>
#include <stdio.h>
#include <stdlib.h>

void pythagoreanTriples(int x) {
    for (int y = 1; y < 100; ++y) {
        double z = sqrt(x*x + y*y);
        if (z == trunc(z)) {
            printf("(%d, %d, %d)\n", x, y, (int) z);
            return;
        }
    }
    printf("no solution exists\n");
}

int main(void) {
    pythagoreanTriples(6);
    return EXIT_SUCCESS;
}
