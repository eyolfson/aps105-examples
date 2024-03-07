#include <stdio.h>
#include <stdlib.h>

int stringToInt(const char *s) {
    int value = 0;
    for (int i = 0; s[i] != '\0'; ++i) {
        if (s[i] < '0' || s[i] > '9') {
            exit(EXIT_FAILURE);
        }
        value *= 10;
        value += s[i] - '0';
    }
    return value;
}

char *intToHexString(int value) {
    int numChars = 0;
    int remaining = value;
    while (remaining > 0) {
        ++numChars;
        remaining /= 16;
    }

    int size = numChars + 1;
    char *s = malloc(sizeof(char) * size);
    int i = size - 1;
    s[i] = '\0';
    remaining = value;
    while (remaining > 0) {
        --i;
        int remainder = remaining % 16;
        if (remainder < 10) {
            s[i] = '0' + remainder;
        }
        else {
            s[i] = 'A' + remainder - 10;
        }
        remaining /= 16;
    }

    return s;
}

int main(int argc, char *argv[]) {
    if (argc != 2) {
        exit(EXIT_FAILURE);
    }
    int input = stringToInt(argv[1]);
    char *output = intToHexString(input);
    puts(output);
    free(output);
    return EXIT_SUCCESS;
}
