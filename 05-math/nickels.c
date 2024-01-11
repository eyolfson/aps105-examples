#include <math.h>
#include <stdio.h>
#include <stdlib.h>

int main(void) {
    printf("Enter an amount: $");
    double amount = 0.0;
    scanf("%lf", &amount);
    printf("%.2lf\n", rint(amount / 0.05) * 0.05);
    return EXIT_SUCCESS;
}
