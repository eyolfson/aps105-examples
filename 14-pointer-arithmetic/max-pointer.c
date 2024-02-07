#include <stdio.h>
#include <stdlib.h>

int* maxPointer(int *a, int *b) {
    if (*a >= *b) {
        return a;
    }
    else {
        return b;
    }
}

int main(void) {
    int x = 1;
    int y = 2;
    int *p = maxPointer(&x, &y);
    printf("max: %d\n", *p);
    return EXIT_SUCCESS;
}
