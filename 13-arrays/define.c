#include <stdio.h>
#include <stdlib.h>

#define GRADES_LENGTH 5

int main(void) {
    int grades[GRADES_LENGTH];
    grades[0] = 75;
    grades[1] = 83;
    grades[2] = 99;
    grades[3] = 64;
    grades[4] = 72;
    int sum = 0;
    for (int i = 0; i < GRADES_LENGTH; ++i) {
        sum += grades[i];
    }
    int average = sum / GRADES_LENGTH;
    printf("Average: %d\n", average);
    return EXIT_SUCCESS;
}
