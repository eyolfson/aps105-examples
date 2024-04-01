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
    int *array = malloc(length * sizeof(int));
    if (array == NULL) {
        exit(EXIT_FAILURE);
    }
    for (int i = 0; i < length; ++i) {
        array[i] = i + 1;
    }
    arrayPrint(array, length);

    int new_length = 7;
    int *new_array = realloc(array, new_length * sizeof(int));
    if (new_array == NULL) {
        free(array);
        exit(EXIT_FAILURE);
    }
    array = new_array;
    length = new_length;
    arrayPrint(array, length);
    return EXIT_SUCCESS;
}
