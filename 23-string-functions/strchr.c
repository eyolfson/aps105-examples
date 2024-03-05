#include <string.h>
#include <stdio.h>
#include <stdlib.h>

int main(void) {
    const char *s = "Hello world";
    const char *f = strchr(s, 'w');
    if (f != NULL) {
        printf("f: %s\n", f);
    }
    return EXIT_SUCCESS;
}
