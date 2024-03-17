#include <math.h>
#include <stdio.h>
#include <stdlib.h>

typedef struct point {
    double x;
    double y;
} point_t;

double distance(point_t *p1 , point_t *p2) {
    return sqrt(pow(p2->x - p1->x, 2.0) + pow(p2->y - p1->y, 2.0));
}

void print(point_t *p) {
    printf("point(%lf, %lf)\n", p->x, p->y);
}

int main(void) {
    point_t p1 = {1.0, 2.0};
    point_t p2 = {4.0, 6.0};
    double d = distance(&p1, &p2);
    printf("%.1lf\n", d);
    return EXIT_SUCCESS;
}
