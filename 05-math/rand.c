#include <stdio.h>
#include <stdlib.h>

int main(void) {
    int x = rand();
    printf("x: %d\n", x);
    x = rand();
    printf("x: %d\n", x);
    x = rand();
    printf("x: %d\n", x);
    return EXIT_SUCCESS;
}
