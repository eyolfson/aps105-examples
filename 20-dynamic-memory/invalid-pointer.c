#include <stdio.h>
#include <stdlib.h>

int *foo(void) {
    int x = 1;
    return &x;
}

int main(void) {
    int *p = foo();
    printf("*p: %d\n", *p);
    return EXIT_SUCCESS;
}
