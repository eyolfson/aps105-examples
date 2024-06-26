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

int compare(const void *a, const void *b) {
    int x = *((const int *) a);
    int y = *((const int *) b);
    if (x < y)      { return -1; }
    else if (x > y) { return 1; }
    else            { return 0; }
}

int main(void) {
    int array[] = {10, 14, 8, 13, 20, 3, 6, 9, 4};
    int arrayLength = ARRAY_LENGTH(array);
    qsort(array, arrayLength, sizeof(int), compare);
    printArray(array, arrayLength);
    return EXIT_SUCCESS;
}
