#include <stdio.h>
#include <stdlib.h>

int main(void) {
    printf("Result: %d\n", 2);
    int i = 32;
    for (int j = 0; j < 3; ++j) {
        printf("j: %d\n", j);
    }
    printf("j: %d\n", i);
    return EXIT_SUCCESS;
}
