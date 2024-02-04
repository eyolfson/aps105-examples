#include <stdio.h>
#include <stdlib.h>

#define GRADES_LENGTH 5

int main(void) {
    int grades[GRADES_LENGTH] = {75, 83, 99, 64, 72};
    int sum = 0;
    for (int i = 0; i < GRADES_LENGTH; ++i) {
        sum += grades[i];
    }
    int average = sum / GRADES_LENGTH;
    printf("Average: %d\n", average);
    return EXIT_SUCCESS;
}
