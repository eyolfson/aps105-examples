#include <stdio.h>
#include <stdlib.h>

int addTwo(int);

int main(void) {
    printf("Result: %d\n", addTwo(4));
    return EXIT_SUCCESS;
}

int addTwo(int x) {
    return x + 2;
}
