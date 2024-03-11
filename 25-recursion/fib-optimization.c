#include <stdio.h>
#include <stdlib.h>

static int cache[45] = {0};

int fib(int n) {
    if (n < 2) {
        return n;
    }
    else {
        int cached = cache[n - 2];
        if (cached != 0) {
            return cached;
        }
        int number = fib(n - 1) + fib(n - 2);
        cache[n - 2] = number;
        return number;
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
