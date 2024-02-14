#include <stdio.h>
#include <stdlib.h>

double fact(double n) {
    double product = 1.0;
    for (double term = 2.0; term <= n; ++term) {
        product *= term;
    }
    return product;
}

int main(void) {
    double value = 0.0;
    double term = 1.0;
    int n = 0;
    while (term >= 0.001) {
        value += term;
        ++n;
        term = 1.0 / fact(n);
    }
    printf("e: %lf\n", value);
    return EXIT_SUCCESS;
}
