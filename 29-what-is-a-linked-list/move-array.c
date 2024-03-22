#include <stdio.h>
#include <stdlib.h>

#define ARRAY_LENGTH(array) (sizeof((array))/sizeof((array)[0]))

void printArray(int array[], int arrayLength) {
    printf("array:");
    for (int i = 0; i < arrayLength; ++i) {
        printf(" %d", array[i]);
    }
    printf("\n");
}

void moveArray(int array[], int arrayLength) {
    int first = array[0];
    for (int i = 0; i < arrayLength - 1; ++i) {
        array[i] = array[i + 1];
    }
    array[arrayLength - 1] = first;
}

int main(void) {
    int array[] = {1, 2, 3, 4, 5};
    int arrayLength = ARRAY_LENGTH(array);
    printArray(array, arrayLength);
    moveArray(array, arrayLength);
    printArray(array, arrayLength);
    return EXIT_SUCCESS;
}
