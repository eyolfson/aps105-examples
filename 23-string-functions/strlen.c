#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void) {
    const char *s = "Hello world";
    int sLen = (int) strlen(s);
    printf("strlen(s): %d\n", sLen);
    return EXIT_SUCCESS;
}
