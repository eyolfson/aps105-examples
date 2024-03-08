#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char *lastStringInString(char *s1, char *s2) {
    int s2Len = strlen(s2);
    int s1Len = strlen(s1);

    for (int i = s2Len - s1Len; i >= 0; --i) {
        char *current = s2 + i;
        if (strncmp(s1, current, s1Len) == 0) {
            return current;
        }
    }
    return NULL;
}

int main(void) {
    char *s1 = "is";
    char *s2 = "This is a sample string";
    char *result = lastStringInString(s1, s2);
    if (result != NULL) {
        printf("match: %s\n", result);
    }
    else {
        printf("no match\n");
    }
    return EXIT_SUCCESS;
}
