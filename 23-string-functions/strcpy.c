#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void) {
    const char *s = "Hello world";
    char *d = malloc(sizeof(char) * 5);
    strcpy(d, s); /* d is not large enough! */
    printf("s: %s\n", s);
    printf("d: %s\n", d);
    return EXIT_SUCCESS;
}
