#include <string.h>
#include <stdio.h>
#include <stdlib.h>

int main(void) {
    const char *s = "This is a long line!";
    const char *f = strstr(s, "long");
    if (f != NULL) {
        printf("f: %s\n", f);
    }
    return EXIT_SUCCESS;
}
