#include <stdio.h>
#include <stdlib.h>

int gcd_loop(int a, int b);

int gcd(int a, int b) {
    if (b == 0) {
        return a;
    }
    if (a >= b) {
        return gcd(b, a % b);
    }
    else {
        return gcd(b, a);
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

int gcd_loop(int a, int b) {
    while (b != 0) {
        if (a >= b) {
            int temp = a;
            a = b;
            b = temp % b;
        }
        else {
            int temp = a;
            a = b;
            b = temp;
        }
    }
    return a;
}
