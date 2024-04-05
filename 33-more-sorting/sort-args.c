#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int compare(const void *a, const void *b) {
    const char **x = (const char **) a;
    const char **y = (const char **) b;
    return strcmp(*x, *y);
}

int main(int argc, const char *argv[]) {
    if (argc < 2) {
        return EXIT_FAILURE;
    }
    qsort(argv + 1, argc - 1, sizeof(const char *), compare);
    for (int i = 1; i < argc; ++i) {
        printf("%s\n", argv[i]);
    }
    return EXIT_SUCCESS;
}
