#include <string.h>
#include <stdio.h>
#include <stdlib.h>

int main(void) {
    const char *s1 = "joneyolfson";
    const char *s2 = "jonstewart";
    int result = strncmp(s1, s2, 3);
    if (result < 0) {
        printf("s1 is less than s2!\n");
    }
    else if (result > 0) {
        printf("s1 is greater than s2!\n");
    }
    else {
        printf("s1 and s2 are the same!\n");
    }
    return EXIT_SUCCESS;
}
