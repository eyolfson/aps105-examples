#include <stdio.h>
#include <stdlib.h>

int main(void) {
    char s[] = "Hello world";
    s[0] = 'h';
    printf("s: %s\n", s);
    return EXIT_SUCCESS;
}
