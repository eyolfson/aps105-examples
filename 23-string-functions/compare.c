#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void) {
    const char* s = "Testing";
    int sLen = (int) strlen(s);
    char *s1 = malloc(sizeof(char) * (sLen + 1));
    char *s2 = malloc(sizeof(char) * (sLen + 1));
    strncat(s1, s, sLen + 1);
    strncat(s2, s, sLen + 1);
    if (s1 == s2) {
        printf("Pointers are the same\n");
    }
    else {
        printf("Pointers are DIFFERENT\n");
    }
    if (strncmp(s1, s2, sLen + 1) == 0) {
        printf("Contents of the string are the same\n");
    }
    else {
        printf("Contents of the string are DIFFERENT\n");
    }
    free(s1);
    free(s2);
    printf("Test %d\n", strcmp("aaa", "b"));
    return EXIT_SUCCESS;
}
