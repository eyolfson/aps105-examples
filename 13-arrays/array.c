#include <stdio.h>
#include <stdlib.h>

int main(void) {
    int grades[5];
    grades[0] = 75;
    grades[1] = 83;
    grades[2] = 99;
    grades[3] = 64;
    grades[4] = 72;
    int average = (grades[0] + grades[1] + grades[2] + grades[3] + grades[4])
                  / 5;
    printf("Average: %d\n", average);
    return EXIT_SUCCESS;
}
