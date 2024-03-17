#include <stdio.h>
#include <stdlib.h>

typedef struct {
    int x;
    int y;
} point_t;

point_t *point_create(int x, int y) {
    point_t *point = malloc(sizeof(point_t));
    point->x = x;
    point->y = y;
    return point;
}

void point_print(point_t *point) {
    printf("point(%d, %d)\n", point->x, point->y);
}

int main(void) {
    point_t *point = point_create(1, 2);
    point_print(point);
    return EXIT_SUCCESS;
}
