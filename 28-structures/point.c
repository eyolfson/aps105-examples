#include <math.h>
#include <stdio.h>
#include <stdlib.h>

#include "point.h"

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

double point_getX(point_t *p) {
    return p->x;
}

void point_setX(point_t *p, double x) {
    p->x = x;
}

double point_getY(point_t *p) {
    return p->y;
}

void point_setY(point_t *p, double y) {
    p->y = y;
}

void point_print(point_t *point) {
    printf("point(%.1lf, %.1lf)\n", point->x, point->y);
}
