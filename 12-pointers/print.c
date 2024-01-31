#include <stdio.h>
#include <stdlib.h>

void setThree(int *p) {
    printf("p [address is %p] = %p\n", (void *) &p, (void *) p);
    printf("  *p = %d\n", *p);
    *p = 3;
}

int main(void) {
    int x = 1;
    int y = 2;
    int *z = &x;
    printf("x [address is %p] = %d\n", (void *) &x, x);
    printf("y [address is %p] = %d\n", (void *) &y, y);
    setThree(z);
    setThree(&y);
    printf("x [address is %p] = %d\n", (void *) &x, x);
    printf("y [address is %p] = %d\n", (void *) &y, y);
    return EXIT_SUCCESS;
}
