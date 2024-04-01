#include <stdio.h>
#include <stdlib.h>

#define ARRAY_LENGTH(array) (sizeof((array))/sizeof((array)[0]))

void swap(int *x, int *y) {
    int temp = *x;
    *x = *y;
    *y = temp;
}

void selectionSort(int array[], int arrayLength) {
    for (int i = 0; i < arrayLength - 1; ++i) {
        int minIndex = i;
        for (int j = i + 1; j < arrayLength; ++j) {
            if (array[j] < array[minIndex]) {
                minIndex = j;
            }
        }
        if (minIndex != i) {
            swap(&array[i], &array[minIndex]);
        }
    }
}

void printArray(int array[], int arrayLength) {
    printf("array: ");
    for (int i = 0; i < arrayLength; ++i) {
        printf(" %d", array[i]);
    }
    printf("\n");
}

int main(void) {
    int array[] = {9, 5, 18, 8, 5, 2};
    int arrayLength = ARRAY_LENGTH(array);
    selectionSort(array, arrayLength);
    printArray(array, arrayLength);
    return EXIT_SUCCESS;
}
