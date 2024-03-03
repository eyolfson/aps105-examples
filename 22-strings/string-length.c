#include <stdio.h>
#include <stdlib.h>

int stringLength(const char *s) {
    int i = 0;
    while (s[i] != '\0') {
        ++i;
    }
    return i;
}

int main(void) {
    const char *s = "Hello";
    printf("stringLength(s): %d\n", stringLength(s));
    return EXIT_SUCCESS;
}
