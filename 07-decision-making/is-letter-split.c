#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>

int main(void) {
    printf("Enter a character: ");
    char c = '\0';
    scanf("%c", &c);
    bool isUppercaseLetter = c >= 'A' && c <= 'Z';
    bool isLowercaseLetter = c >= 'a' && c <= 'z';
    if (isUppercaseLetter || isLowercaseLetter) {
        printf("You entered a letter!\n");
    }
    else {
        printf("You did not enter a letter!\n");
    }
    return EXIT_SUCCESS;
}
