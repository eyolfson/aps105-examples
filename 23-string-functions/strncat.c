#include <string.h>
#include <stdio.h>
#include <stdlib.h>

#define ARRAY_LENGTH(array) (sizeof((array))/sizeof((array)[0]))

int main(void) {
    const char s[] = {' ', 'J', 'o', 'n'};
    int size = 10;
    char *d = malloc(sizeof(char) * size);
    strncpy(d, "Hello", size);
    /* Still doesn't take into account the number of bytes in d */
    strncat(d, s, ARRAY_LENGTH(s));
    /* This is better. */
    // strncat(d, s, size - strlen(d) - 1);
    puts(d);
    return EXIT_SUCCESS;
}
