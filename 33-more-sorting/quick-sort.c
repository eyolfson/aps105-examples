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

int partition(int array[], int low, int high) {
    int pivot = array[high];
    int i = low;
    for(int j = low; j < high; j++) {
        if(array[j] < pivot) {
            if (i != j) {
                swap(&array[i], &array[j]);
            }
            ++i;
        }
    }
    swap(&array[i], &array[high]);
    return i;
}

void quickSortHelper(int array[], int low, int high) {
    if (low >= high) {
        return;
    }
    int pivot = partition(array, low, high);
    quickSortHelper(array, low, pivot - 1);
    quickSortHelper(array, pivot + 1, high);
}

void quickSort(int array[], int arrayLength) {
    quickSortHelper(array, 0, arrayLength - 1);
}

int main(void) {
    int array[] = {10, 14, 8, 13, 20, 3, 6, 9};
    int arrayLength = ARRAY_LENGTH(array);
    quickSort(array, arrayLength);
    printArray(array, arrayLength);
    return EXIT_SUCCESS;
}
