#include <stdio.h>
#include <stdlib.h>

int main(void) {
    int *p = malloc(sizeof(int));
    *p = 14;
    free(p);
    free(p);
    printf("*p: %d\n", *p);
    return EXIT_SUCCESS;
}
