#include <string.h>
#include <stdio.h>
#include <stdlib.h>

int main(void) {
    const char *s = " world";
    int size = 12;
    char *d = malloc(sizeof(char) * size);
    strncpy(d, "Hello", size);
    strcat(d, s);
    puts(d);
    return EXIT_SUCCESS;
}
