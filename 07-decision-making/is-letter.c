#include <stdio.h>
#include <stdlib.h>

int main(void) {
    printf("Enter a character: ");
    char c = '\0';
    scanf("%c", &c);
    if ((c >= 'A' && c <= 'Z') || (c >= 'a' && c <= 'z')) {
        printf("You entered a letter!\n");
    }
    else {
        printf("You did not enter a letter!\n");
    }
    return EXIT_SUCCESS;
}
