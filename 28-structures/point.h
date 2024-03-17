#ifndef POINT_H
#define POINT_H

typedef struct point point_t;

point_t *point_create(double x, double y);
double point_distance(point_t *p1 , point_t *p2);
double point_getX(point_t *p);
void point_setX(point_t *p, double x);
double point_getY(point_t *p);
void point_setY(point_t *p, double y);
void point_print(point_t *point);

#endif
