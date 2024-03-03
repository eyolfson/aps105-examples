#include <stdio.h>
#include <stdlib.h>

int main(void) {
    int *p = malloc(sizeof(int));
    *p = 7237450; 
    printf("%s\n", (char*) p);
    return EXIT_SUCCESS;
}
