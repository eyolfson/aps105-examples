#include <stdio.h>
#include <stdlib.h>

void swap(int a, int b) {
    int temp = a;
    a = b;
    b = temp;
    printf("swap a: %d, b: %d\n", a, b);
}

int main(void) {
    int a = 1;
    int b = 2;
    printf("main (before swap) a: %d, b: %d\n", a, b);
    swap(a, b);
    printf("main (after swap)  a: %d, b: %d\n", a, b);
    return EXIT_SUCCESS;
}
