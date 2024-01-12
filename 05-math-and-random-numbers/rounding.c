#include <math.h>
#include <stdio.h>
#include <stdlib.h>

int main(void) {
    double a = 2.5;
    printf("%.0lf\n", a); /* prints "2" */
    printf("%.1lf\n", a); /* prints "2.5" */
    return EXIT_SUCCESS;
}
