#include <stdio.h>
#include <stdlib.h>

int countSpaces(const char *s) {
    int count = 0;
    while (*s != '\0') {
        if (*s == ' ') {
            ++count;
        }
        ++s;
    }
    return count;
}

int main(void) {
    const char *s = "Hello world";
    printf("countSpaces(s): %d\n", countSpaces(s));
    return EXIT_SUCCESS;
}
