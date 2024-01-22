#include <stdio.h>
#include <stdlib.h>

int main(void) {
    for (int row = 1; row <= 5; ++row) {
        for (int count = 1; count <= row; ++count) {
            printf("*");
        }
        printf("\n");
    }
    return EXIT_SUCCESS;
}
