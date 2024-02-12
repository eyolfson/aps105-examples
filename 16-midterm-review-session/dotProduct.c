#include <stdio.h>

int dotProduct(int arrA[], int arrB[]);

int main(void) {
    int arr1[] = {2, 3, 4, 5, 9, -1};
    int arr2[] = {7, 8, 9, 9, 3, -1};
    printf("Dot product is %d.\n", dotProduct(arr1, arr2));
    return 0;
}

int dotProduct(int arrA[], int arrB[]) {
    int result = 0;
    int index = 0;
    while (!(arrA[index] == -1 || arrB[index] == -1)) {
        result += arrA[index] * arrB[index];
        ++index;
    }
    if (arrA[index] == -1 && arrB[index] == -1) {
        return result;
    }
    return -1;
}
