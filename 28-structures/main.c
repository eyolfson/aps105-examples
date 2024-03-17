#include <stdio.h>
#include <stdlib.h>

#include "point.h"

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
