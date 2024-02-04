#include <stdio.h>
#include <stdlib.h>

#define ARRAY_LENGTH(arr) (sizeof(arr) / sizeof((arr)[0]))

int main(void) {
    int grades[] = {75, 83, 99, 64, 72};
    int gradesLength = ARRAY_LENGTH(grades);
    int sum = 0;
    for (int i = 0; i < gradesLength; ++i) {
        sum += grades[i];
    }
    int average = sum / gradesLength;
    printf("Average: %d\n", average);
    return EXIT_SUCCESS;
}
