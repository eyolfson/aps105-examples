#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void) {
    const char *s = "Hello world";
    printf("s: %s\n", s);

    int size = 6;
    char *d = malloc(sizeof(char) * size);

    strncpy(d, s, size);
    /* There's no overflow, but d does not have a null byte */
    if (d[size - 1] != '\0') {
        printf("There's no null byte!\n");
        d[size - 1] = '\0';
    }

    printf("d: %s\n", d);
    free(d);

    size = 16;
    d = malloc(sizeof(char) * size);
    strncpy(d, s, size);

    int sLen = (int) strlen(s);
    bool paddedZeros = true;
    for (int i = sLen; i < size; ++i) {
        if (d[i] != '\0') {
            paddedZeros = false;
            break;
        }
    }
    if (paddedZeros) {
        printf("The rest of the bytes are null bytes!\n");
    }

    printf("d: %s\n", d);
    free(d);
    return EXIT_SUCCESS;
}
