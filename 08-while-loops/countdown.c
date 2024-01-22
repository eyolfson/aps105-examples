#include <stdio.h>
#include <stdlib.h>

int main(void) {
    int count = 10;
    while (count > 0) {
        printf("Countdown: %02d\n", count);
        --count;
    }
    printf("Blast off!\n");
    return EXIT_SUCCESS;
}

