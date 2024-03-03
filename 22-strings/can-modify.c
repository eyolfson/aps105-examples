#include <stdio.h>
#include <stdlib.h>

int main(void) {
    char s[] = "Hello";
    s[0] = 'h';
    printf("s: %s\n", s);
    return EXIT_SUCCESS;
}
