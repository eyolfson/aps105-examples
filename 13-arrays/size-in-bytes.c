#include <stdio.h>
#include <stdlib.h>

int main(void) {
    int grades[] = {75, 83, 99, 64, 72};
    printf("grades size (in bytes): %d\n", (int) sizeof(grades));
    return EXIT_SUCCESS;
}
