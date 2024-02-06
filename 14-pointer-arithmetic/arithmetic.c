#include <stdio.h>
#include <stdlib.h>

int main(void) {
    int x = 1;
    int y = 2;
    int z = 3;
    int *p = &z;
    *(p + 2) = 4;
    printf("x: %d, y: %d, z: %d\n", x, y, z);
    return EXIT_SUCCESS;
}
