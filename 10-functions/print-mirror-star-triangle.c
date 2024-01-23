#include <stdio.h>
#include <stdlib.h>

int main(void) {
    const int N = 5;
    for (int row = 1; row <= N; ++row) {
        for (int col = 1; col <= N; ++col) {
            if ((N - col) >= row) {
                printf(" ");
            }
            else {
                printf("*");
            }
        }
        printf("\n");
    }
    return EXIT_SUCCESS;
}
