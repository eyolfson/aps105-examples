#include <stdio.h>
#include <stdlib.h>

void randomizeArray(int *array, int arrayLength) {
    for (int i = 0; i < arrayLength; ++i) {
        array[i] = rand() % 100 + 1;
    }
}

void printArray(int *array, int arrayLength) {
    printf("array:");
    for (int i = 0; i < arrayLength; ++i) {
        printf(" %d", array[i]);
    }
    printf("\n");
}

int main(void) {
    int arrayLength = 0;
    do {
        printf("Enter the length of the array: ");
        scanf("%d", &arrayLength);
    } while (arrayLength <= 0);

    int *array = malloc(sizeof(int) * arrayLength);
    if (array == NULL) {
        return EXIT_FAILURE;
    }

    randomizeArray(array, arrayLength);
    printArray(array, arrayLength);

    free(array);
    array = NULL;

    return EXIT_SUCCESS;
}
