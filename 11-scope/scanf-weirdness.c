#include <stdio.h>
#include <stdlib.h>

int main(void) {
    char c1 = '\0', c2 = '\0';
    printf("Input 2 characters: ");
    scanf("%c%c", &c1, &c2);
    printf("c1: %c (%d), c2: %c (%d)\n", c1, c1, c2, c2);
    return EXIT_SUCCESS;
}
