#include <stdio.h>
#include <stdlib.h>

#define ARRAY_LENGTH(arr) (sizeof(arr) / sizeof((arr)[0]))

int sum(int array[]) {
    int arrayLength = ARRAY_LENGTH(array);
    int accumulator = 0;
    for (int i = 0; i < arrayLength; ++i) {
        accumulator += array[i];
    }
    return accumulator;
}

int main(void) {
    int grades[] = {75, 83, 99, 64, 72};
    int gradesLength = ARRAY_LENGTH(grades);
    int average = sum(grades) / gradesLength;
    printf("Average: %d\n", average);
    return EXIT_SUCCESS;
}
