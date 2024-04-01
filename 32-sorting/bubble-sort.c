#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>

#define ARRAY_LENGTH(array) (sizeof((array))/sizeof((array)[0]))

void bubbleSort(int array[], int arrayLength) {
    bool swapped;
    do {
        swapped = false;
        for (int i = 0; i < arrayLength - 1; ++i) {
            if (array[i] > array[i + 1]) {
                int temp = array[i];
                array[i] = array[i + 1];
                array[i + 1] = temp;
                swapped = true;
            }
        }

    } while (swapped);
}

void printArray(int array[], int arrayLength) {
    printf("array: ");
    for (int i = 0; i < arrayLength; ++i) {
        printf(" %d", array[i]);
    }
    printf("\n");
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
