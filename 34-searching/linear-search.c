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


int linearSearch(int array[], int arrayLength, int val) {
    for (int i = 0; i < arrayLength; ++i) {
        if (array[i] == val) {
            return i;
        }
    }
    return -1;
}

int main(void) {
    int array[] = {10, 14, 8, 13, 20, 3, 6, 9, 4, 8, 3, 1, 19, 15};
    int arrayLength = ARRAY_LENGTH(array);
    printArray(array, arrayLength);
    int index = linearSearch(array, arrayLength, 6);
    if (index != -1) {
        printf("Found at index: %d\n", index);
    }
    return EXIT_SUCCESS;
}
