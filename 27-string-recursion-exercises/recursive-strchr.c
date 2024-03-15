#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char* recursiveStrchr(char* s, char c) {
    if (*s == '\0') {
        return NULL;
    }
    else if (*s == c) {
        return s;
    }
    else {
        return recursiveStrchr(s + 1, c);
    }
}

int main(void) {
    char* s = "Hello";
    char c = 'l';
    printf("strchr: %s\n", strchr(s, c));
    printf("recursiveStrchr: %s\n", recursiveStrchr(s, c));
    return EXIT_SUCCESS;
}
