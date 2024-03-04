#include <stdio.h>
#include <stdlib.h>

int main(void) {
    const char *s = "Hello there";
    puts(s);
    printf("%s\n", s + 6);
    printf("%.5s\n", s);
    return EXIT_SUCCESS;
}
