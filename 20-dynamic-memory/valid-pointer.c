#include <stdio.h>
#include <stdlib.h>

int *foo(void) {
    int *p = malloc(sizeof(int));
    *p = 1;
    return p;
}

int main(void) {
    int *p = foo();
    printf("*p: %d\n", *p);
    return EXIT_SUCCESS;
}
