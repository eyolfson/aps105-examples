#include <stdio.h>
#include <stdlib.h>

int main(void) {
    printf("Enter 3 integers: ");
    int x = 0, y = 0, z = 0;
    scanf("%d%d%d", &x, &y, &z);
    int max = z;
    if (x >= y && x >= z) {
        max = x;
    }
    else if (y >= x && y >= z) {
        max = y;
    }
    printf("Maximum: %d\n", max);
    return EXIT_SUCCESS;
}
