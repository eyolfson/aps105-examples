#include <stdio.h>
#include <stdlib.h>

#define ARRAY_LENGTH(array) (sizeof((array))/sizeof((array)[0]))

int main(void) {
    char s[] = "Hello";
    printf("ARRAY_LENGTH(s): %d\n", (int) ARRAY_LENGTH(s));
    return EXIT_SUCCESS;
}
