#include <stdio.h>
#include <stdlib.h>

enum direction {
    NORTH = 1,
    EAST,
    SOUTH,
    WEST,
};

void printDirection(enum direction d) {
    if (d == NORTH) {
        printf("North\n");
    }
    else if (d == EAST) {
        printf("East\n");
    }
    else if (d == SOUTH) {
        printf("South\n");
    }
    else if (d == WEST) {
        printf("West\n");
    }
    else {
        exit(EXIT_FAILURE);
    }
}

int main(void) {
    return EXIT_SUCCESS;
}
