#include <limits.h>
#include <stdio.h>
#include <stdlib.h>

#define ARRAY_LENGTH(arr) (sizeof(arr) / sizeof((arr)[0]))

int largestSum(int list[], int count) {
    int largest = INT_MIN;
    for (int length = 1; length <= count; ++length) {
        for (int start = 0; start <= count - length; ++start) {
            int sum = 0;
            for (int i = 0; i < length; ++i) {
                sum += list[i + start];
            }
            if (sum > largest) {
                largest = sum;
            }
        }
    }
    return largest;
}

int main(void) {
    int a[] = {-2, 1, -3, 4, -1, 2, 1, -5, 4};
    printf("largestSum: %d\n", largestSum(a, ARRAY_LENGTH(a)));
    return EXIT_SUCCESS;
}
