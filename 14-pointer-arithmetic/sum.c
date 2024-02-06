#include <stdio.h>
#include <stdlib.h>

#define ARRAY_LENGTH(arr) (sizeof(arr) / sizeof((arr)[0]))

int sum(int array[], int arrayLength) {
    int accumulator = 0;
    for (int i = 0; i < arrayLength; ++i) {
        accumulator += array[i];
    }
    return accumulator;
}

int main(void) {
    int x;
    printf("%p\n", (&x + 1));
    int grades[] = {75, 83, 99, 64, 72};
    int gradesLength = ARRAY_LENGTH(grades);
    int average = sum(grades, gradesLength) / gradesLength;
    printf("Average: %d\n", average);
    return EXIT_SUCCESS;
}
