#include <stdio.h>
#include <stdlib.h>

int fib(int n) {
    if (n < 2) {
        return n;
    }
    else {
        return fib(n - 1) + fib(n - 2);
    }
}

int main(int argc, char *argv[]) {
    if (argc != 2) {
        exit(EXIT_FAILURE);
    }
    int n = atoi(argv[1]);
    printf("%d\n", fib(n));
    return EXIT_SUCCESS;
}
