#include <stdio.h>
#include <stdlib.h>

#define ARRAY_LENGTH(array) (sizeof((array))/sizeof((array)[0]))

int sum(int *array, int arrayLength) {
    if (arrayLength == 0) {
        return 0;
    }
    else {
        return array[0] + sum(array + 1, arrayLength - 1);
    }
}

int main(void) {
    int array[] = {1, 2, 3, 4, 5};
    int arrayLength = ARRAY_LENGTH(array);
    printf("%d\n", sum(array, arrayLength));
    return EXIT_SUCCESS;
}
