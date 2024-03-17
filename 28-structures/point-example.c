#include <math.h>
#include <stdio.h>
#include <stdlib.h>

typedef struct point {
    double x;
    double y;
} point_t;

point_t *point_create(double x, double y) {
    point_t *point = malloc(sizeof(point_t));
    point->x = x;
    point->y = y;
    return point;
}

double point_distance(point_t *p1 , point_t *p2) {
    return sqrt(pow(p2->x - p1->x, 2.0) + pow(p2->y - p1->y, 2.0));
}

void point_print(point_t *point) {
    printf("point(%.1lf, %.1lf)\n", point->x, point->y);
}

int main(void) {
    point_t *p1 = point_create(1.0, 2.0);
    point_print(p1);
    point_t *p2 = point_create(4.0, 6.0);
    point_print(p2);
    printf("distance(p1, p2) = %.1lf\n", point_distance(p1, p2));
    free(p1);
    free(p2);
    return EXIT_SUCCESS;
}
