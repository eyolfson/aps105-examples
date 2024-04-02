#include <stdbool.h>
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

void swap(int *x, int *y) {
    int temp = *x;
    *x = *y;
    *y = temp;
}

void bubbleSort(int array[], int arrayLength) {
    bool swapped;
    do {
        swapped = false;
        for (int i = 0; i < arrayLength - 1; ++i) {
            if (array[i] > array[i + 1]) {
                swap(&array[i], &array[i + 1]);
                swapped = true;
            }
        }

    } while (swapped);
}

int main(void) {
    int array[] = {2, 5, 3, 1};
    int arrayLength = ARRAY_LENGTH(array);
    printf("before ");
    printArray(array, arrayLength);
    bubbleSort(array, arrayLength);
    printf(" after ");
    printArray(array, arrayLength);
    return EXIT_SUCCESS;
}
