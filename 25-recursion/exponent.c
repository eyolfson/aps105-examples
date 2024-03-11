#include <stdio.h>
#include <stdlib.h>

int exponent(int b, int n) {
    /* Base case */
    if (n == 0) {
        return 1;
    }
    /* Recursive step */
    else {
        return b * exponent(b, n - 1);
    }
}

int main(int argc, char *argv[]) {
    if (argc != 3) {
        exit(EXIT_FAILURE);
    }
    int b = atoi(argv[1]);
    int n = atoi(argv[2]);
    printf("%d\n", exponent(b, n));
    return EXIT_SUCCESS;
}
