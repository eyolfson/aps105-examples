#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void) {
    const char *s = "Hello world";
    int sLen = (int) strnlen(s, 5);
    printf("strnlen(s, 5): %d\n", sLen);
    return EXIT_SUCCESS;
}
