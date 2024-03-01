#include <stdio.h>
#include <stdlib.h>

void randomizeArray(int array[], int arrayLength);

int main(void) {
    int arrayLength = 0;
    do {
        printf("Enter the length of the array: ");
        scanf("%d", &arrayLength);
    } while (arrayLength <= 0);

    int array[arrayLength];

    randomizeArray(array, arrayLength);

    return EXIT_SUCCESS;
}

void randomizeArray(int array[], int arrayLength) {
    for (int i = 0; i < arrayLength; ++i) {
        array[i] = rand() % 100 + 1;
    }
}
