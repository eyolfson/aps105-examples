#include <stdio.h>
#include <stdlib.h>

void arrayPrint(int *array, int arrayLength) {
    printf("array:");
    for (int i = 0; i < arrayLength; ++i) {
        printf(" %d", array[i]);
    }
    printf("\n");
}

int min(int a, int b) {
    if (a > b) {
        return b;
    }
    return a;
}

int main(void) {
    int length = 4;
    int *array = malloc(length * sizeof(int));
    if (array == NULL) {
        exit(EXIT_FAILURE);
    }
    for (int i = 0; i < length; ++i) {
        array[i] = i + 1;
    }
    arrayPrint(array, length);

    int new_length = 7;
    int *new_array = malloc(new_length * sizeof(int));
    if (new_array == NULL) {
        free(array);
        exit(EXIT_FAILURE);
    }
    for (int i = 0; i < min(length, new_length); ++i) {
        new_array[i] = array[i];
    }
    free(array);
    array = new_array;
    for (int i = length; i < new_length; ++i) {
        array[i] = 0;
    }
    length = new_length;
    arrayPrint(array, length);
    return EXIT_SUCCESS;
}
