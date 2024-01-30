#include <stdio.h>
#include <stdlib.h>

int a = 1;
int b = 2;

void swap(void) {
    int temp = a;
    a = b;
    b = temp;
    printf("swap a: %d, b: %d\n", a, b);
}

int main(void) {
    printf("main (before swap) a: %d, b: %d\n", a, b);
    swap();
    printf("main (after swap)  a: %d, b: %d\n", a, b);
    return EXIT_SUCCESS;
}
