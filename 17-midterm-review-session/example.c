#include <stdio.h>
#include <stdlib.h>

int main(void) {
    int x = 1;
    int n = 1;
    while (x > 0) {
        x *= 2;
        ++n;
    }
    printf("n = %d\n", n);
    return EXIT_SUCCESS;
}
