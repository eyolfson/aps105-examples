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

bool inOrder(int array[], int arrayLength) {
    for (int i = 1; i < arrayLength; ++i) {
        if (array[i - 1] > array[i]) {
            return false;
        }
    }
    return true;
}

void bozoSort(int array[], int arrayLength) {
    while (!inOrder(array, arrayLength)) {
        int i = rand() % arrayLength;
        int j = rand() % (arrayLength - 1);
        if (j >= i) {
            ++j;
        }
        swap(&array[i], &array[j]);
    }
}

int main(void) {
    int array[] = {10, 14, 8, 13, 20, 3, 6, 9, 4};
    int arrayLength = ARRAY_LENGTH(array);
    printArray(array, arrayLength);
    bozoSort(array, arrayLength);
    printArray(array, arrayLength);
    return EXIT_SUCCESS;
}
