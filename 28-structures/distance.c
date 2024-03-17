#include <math.h>
#include <stdio.h>
#include <stdlib.h>

double distance(double x1, double y1, double x2, double y2) {
    return sqrt(pow(x2 - x1, 2.0) + pow(y2 - y1, 2.0));
}

void print(double x, double y) {
    printf("point(%.1lf, %.1lf)\n", x, y);
}

int main(void) {
    double x1 = 1.0;
    double y1 = 2.0;
    double x2 = 4.0;
    double y2 = 6.0;
    double d = distance(x1, y1, x2, y2);
    printf("%.1lf\n", d);
    return EXIT_SUCCESS;
}
