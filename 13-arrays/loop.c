#include <stdio.h>
#include <stdlib.h>

int main(void) {
    int grades[5];
    grades[0] = 75;
    grades[1] = 83;
    grades[2] = 99;
    grades[3] = 64;
    grades[4] = 72;
    int sum = 0;
    for (int i = 0; i < 5; ++i) {
        sum += grades[i];
    }
    int average = sum / 5;
    printf("Average: %d\n", average);
    return EXIT_SUCCESS;
}
