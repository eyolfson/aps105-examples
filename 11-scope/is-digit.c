#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>

bool is_digit(char c) {
    return c >= '0' && c <= '9';
}

int main(void) {
    char c1 = '\0', c2 = '\0';
    printf("Input 2 characters: ");
    scanf("%c %c", &c1, &c2);
    printf("c1: %c (%d), c2: %c (%d)\n", c1, c1, c2, c2);
    printf("Digits:");
    if (is_digit(c1)) {
        printf(" %c", c1);
    }
    if (is_digit(c2)) {
        printf(" %c", c2);
    } 
    printf("\n");
    return EXIT_SUCCESS;
}
