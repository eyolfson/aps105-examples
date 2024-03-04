#include <stdio.h>
#include <stdlib.h>

#define BUFFER_SIZE 4

int main(void) {
    printf("Input your last name: ");
    char s[BUFFER_SIZE];
    fgets(s, BUFFER_SIZE, stdin);
    printf("s: %s\n", s);
    return EXIT_SUCCESS;
}
