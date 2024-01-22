#include <stdio.h>
#include <stdlib.h>

int main(void) {
    int sum = 0;
    printf("Input a positive number: ");
    int input = 0;
    scanf("%d", &input);
    while (input != 0) {
        sum += input;
        printf("Input a positive integer (0 to stop): ");
        scanf("%d", &input);
    }
    printf("The sum is: %d\n", sum);
    return EXIT_SUCCESS;
}
