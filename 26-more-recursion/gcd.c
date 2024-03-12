#include <stdio.h>
#include <stdlib.h>

int gcd(int a, int b) {
    if (a > b) {
        return gcd(b, a - b);
    }
    else if (b > a) {
        return gcd(b, a);
    }
    else {
        return a;
    }
}

int main(int argc, char *argv[]) {
    if (argc != 3) {
        return EXIT_FAILURE;
    }
    int a = atoi(argv[1]);
    int b = atoi(argv[2]);
    if (a <= 0 || b <= 0) {
        return EXIT_FAILURE;
    }
    printf("Greatest common divisor of %d and %d is %d\n", a, b, gcd(a, b));
    return EXIT_SUCCESS;
}