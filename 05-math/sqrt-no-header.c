#include <stdio.h>
#include <stdlib.h>

double sqrt(double);

int main(void) {
    double y = 4.0;
    double y_sqrt = sqrt(y);
    printf("sqrt(%.1lf) = %.1lf\n", y, y_sqrt);
    printf("%.0lf\n", 3.5);
    return EXIT_SUCCESS;
}
