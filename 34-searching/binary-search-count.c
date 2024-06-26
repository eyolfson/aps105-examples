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

int binarySearchFirst(int array[], int arrayLength, int val) {
    int low = 0;
    int high = arrayLength - 1;
    while (low <= high) {
        int mid = (high + low) / 2;
        if ((mid == 0 || val > array[mid - 1]) && val == array[mid]) {
            return mid;
        }
        else if (val > array[mid]) {
            low = mid + 1;
        }
        else {
            high = mid - 1;
        }
    }
    return -1;
}

int binarySearchLast(int array[], int arrayLength, int val) {
    int low = 0;
    int high = arrayLength - 1;
    while (low <= high) {
        int mid = (high + low) / 2;
        if ((mid == arrayLength - 1 || val < array[mid + 1]) && val == array[mid]) {
            return mid;
        }
        else if (val >= array[mid]) {
            low = mid + 1;
        }
        else {
            high = mid - 1;
        }
    }
    return -1;
}

int intCompare(const void *a, const void *b) {
    const int x = *((const int *) a);
    const int y = *((const int *) b);
    if (x < y)      { return -1; }
    else if (x > y) { return 1; }
    else            { return 0; }
}

void binarySearch(int array[], int arrayLength, int val) {
    int first = binarySearchFirst(array, arrayLength, val);
    if (first == -1) {
        printf("%d not found\n", val);
        return;
    }
    int last = binarySearchLast(array, arrayLength, val);
    int matches = last - first + 1;
    printf("%d found (%d matches)\n", val, matches);
}

int main(void) {
    int array[] = {10, 14, 8, 13, 20, 3, 6, 9, 4, 8, 3, 1, 19, 15};
    int arrayLength = ARRAY_LENGTH(array);
    qsort(array, arrayLength, sizeof(int), intCompare);
    printArray(array, arrayLength);
    binarySearch(array, arrayLength, 8);
    return EXIT_SUCCESS;
}
