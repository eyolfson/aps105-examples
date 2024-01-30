#include <stdio.h>
#include <stdlib.h>

int factorial(int n) {
    if (n < 0) {
        return 0;
    }
    int product = 1;
    for (int x = 1; x <= n; ++x) {
        product *= x;
    }
    return product;
}

int main(void) {
    int x = 4;
    int x_fact = factorial(x);
    printf("factorial(%d) = %d\n", x, x_fact);
    x = 10;
    x_fact = factorial(x);
    printf("factorial(%d) = %d\n", x, x_fact);
    return EXIT_SUCCESS;
}
