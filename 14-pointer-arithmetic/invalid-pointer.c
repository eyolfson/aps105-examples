#include <stdio.h>
#include <stdlib.h>

int *foo(void) {
    int x = 1;
    printf("&x = %p\n", &x);
    return &x;
}

int main(void) {
    int *p = foo();
    printf("&p = %p\n", &p);
    printf("*p: %d\n", *p);
    return EXIT_SUCCESS;
}
