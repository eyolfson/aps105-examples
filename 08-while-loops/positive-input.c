#include <stdio.h>
#include <stdlib.h>

int main(void) {
    int input = 0;
    do {
        printf("Input a positive integer: ");
        scanf("%d", &input);
    } while (input <= 0);
    printf("You entered: %d\n", input);
    return EXIT_SUCCESS;
}
