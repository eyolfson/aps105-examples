#include <stdio.h>
#include <stdlib.h>

int main(void) {
    int x = 123456789;
    printf("Input your last name: ");
    char s[4];
    scanf("%s", s);
    printf("s: %s\n", s);
    printf("x: %d\n", x);
    return EXIT_SUCCESS;
}
