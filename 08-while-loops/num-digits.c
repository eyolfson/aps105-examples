#include <stdio.h>
#include <stdlib.h>

int main(void) {
    int input = 0;
    printf("Input a positive integer: ");
    scanf("%d", &input);
    int num_digits = 0;
    while (input > 0) {
        input /= 10;
        ++num_digits;
    }
    printf("Number of digits: %d\n", num_digits);
    return EXIT_SUCCESS;
}
