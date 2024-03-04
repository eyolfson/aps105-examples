#include <stdio.h>
#include <stdlib.h>

int main(void) {
    char *s = NULL;
    size_t size = 0;
    ssize_t bytes_written = getline(&s, &size, stdin);
    s[bytes_written - 1] = '\0'; /* Replace the newline with a null byte */
    printf("size: %lu, bytes_written: %ld, s: %s\n", size, bytes_written, s);
    free(s);
    return EXIT_SUCCESS;
}
