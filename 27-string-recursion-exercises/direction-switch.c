#include <stdio.h>
#include <stdlib.h>

enum direction {
    NORTH = 1,
    EAST,
    SOUTH,
    WEST,
};

void printDirection(enum direction d) {
    switch (d) {
    case NORTH:
        printf("North\n");
        break;
    case EAST:
        printf("East\n");
        break;
    case SOUTH:
        printf("South\n");
        break;
    case WEST:
        printf("West\n");
        break;
    default:
        exit(EXIT_FAILURE);
    }
}

int main(void) {
    return EXIT_SUCCESS;
}
