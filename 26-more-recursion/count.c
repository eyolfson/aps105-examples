#include <stdio.h>
#include <stdlib.h>

void count(int n) {
    if (n <= 0) {
        return;
    }
    printf("%d\n", n);
    count(n - 1);
}

int main(void) {
    count(5);
    return EXIT_SUCCESS;
}
