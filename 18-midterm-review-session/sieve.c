#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>

int main(void) {
    bool marked[100] = {0};
    for (int p = 2; p*p <= 100; ++p) {
        if (!marked[p]) {
            for (int i = p * p; i < 100; i += p) {
                marked[i] = true;
            }
        }
    }
    bool first = true;
    for (int i = 2; i < 100; ++i) {
        if (!marked[i]) {
            if (first) {
                printf("%d", i);
                first = false;
            }
            else {
                printf(" %d", i);
            }
        }
    }
    printf("\n");
    return EXIT_SUCCESS;
}
