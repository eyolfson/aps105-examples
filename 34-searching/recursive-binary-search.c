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

int recursiveBinarySearchHelper(int array[], int low, int high, int val) {
    if (low > high) {
        return -1;
    }
    int mid = (low + high) / 2;
    if (array[mid] == val) {
        return mid;
    }
    else if (array[mid] > val) {
        return recursiveBinarySearchHelper(array, low, mid - 1, val);
    }
    else {
        return recursiveBinarySearchHelper(array, mid + 1, high, val);
    }
}

int recursiveBinarySearch(int array[], int arrayLength, int val) {
    return recursiveBinarySearchHelper(array, 0, arrayLength -1, val);
}

int intCompare(const void *a, const void *b) {
    const int x = *((const int *) a);
    const int y = *((const int *) b);
    if (x < y)      { return -1; }
    else if (x > y) { return 1; }
    else            { return 0; }
}

int main(void) {
    int array[] = {10, 14, 8, 13, 20, 3, 6, 9, 4, 8, 3, 1, 19, 15};
    int arrayLength = ARRAY_LENGTH(array);
    qsort(array, arrayLength, sizeof(int), intCompare);
    printArray(array, arrayLength);
    int index = recursiveBinarySearch(array, arrayLength, 6);
    if (index != -1) {
        printf("Found at index: %d\n", index);
    }
    return EXIT_SUCCESS;
}
