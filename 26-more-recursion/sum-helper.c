#include <stdio.h>
#include <stdlib.h>

#define ARRAY_LENGTH(array) (sizeof((array))/sizeof((array)[0]))

int sum_helper(int *array, int arrayLength, int currentSum) {
    if (arrayLength == 0) {
        return currentSum;
    }
    else {
        return sum_helper(array + 1, arrayLength - 1, array[0] + currentSum);
    }
}

int sum(int *array, int arrayLength) {
    return sum_helper(array, arrayLength, 0);
}

int main(void) {
    int array[] = {1, 2, 3, 4, 5};
    int arrayLength = ARRAY_LENGTH(array);
    printf("%d\n", sum(array, arrayLength));
    return EXIT_SUCCESS;
}
