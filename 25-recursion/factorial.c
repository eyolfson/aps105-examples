#include <stdio.h>
#include <stdlib.h>

int factorial(int n) {
    /* Base case */
    if (n < 2) {
        return 1;
    }
    /* Recursive step */
    else {
        return n * factorial(n - 1);
    }
}

int main(int argc, char *argv[]) {
    if (argc != 2) {
        exit(EXIT_FAILURE);
    }
    int n = atoi(argv[1]);
    printf("%d\n", factorial(n));
    return EXIT_SUCCESS;
}
