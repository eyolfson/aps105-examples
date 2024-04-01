#include <stdio.h>
#include <stdlib.h>

void arrayPrint(int *array, int arrayLength) {
    printf("array:");
    for (int i = 0; i < arrayLength; ++i) {
        printf(" %d", array[i]);
    }
    printf("\n");
}

int main(void) {
    int length = 4;
    int *array_malloc = malloc(length * sizeof(int));
    arrayPrint(array_malloc, length);
    int *array_calloc = calloc(length, sizeof(int));
    arrayPrint(array_calloc, length);
    free(array_malloc);
    free(array_calloc);
    return EXIT_SUCCESS;
}
