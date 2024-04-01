#include <stdio.h>
#include <stdlib.h>

#define ARRAY_LENGTH(array) (sizeof((array))/sizeof((array)[0]))

void insertionSort(int array[], int arrayLength) {
    for (int i = 1; i < arrayLength; ++i) {
        int element = array[i];
        int j = i;
        while (j > 0 && array[j - 1] > element) {
            array[j] = array[j - 1];
            --j;
        }
        if (j != i) {
          array[j] = element;
        }
    }
}

void printArray(int array[], int arrayLength) {
    printf("array:");
    for (int i = 0; i < arrayLength; ++i) {
        printf(" %d", array[i]);
    }
    printf("\n");
}

int main(void) {
    int array[] = {9, 2, 6, 5, 1, 7};
    int arrayLength = ARRAY_LENGTH(array);
    insertionSort(array, arrayLength);
    printArray(array, arrayLength);
    return EXIT_SUCCESS;
}
