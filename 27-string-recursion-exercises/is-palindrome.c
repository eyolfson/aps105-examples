#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

bool is_palindrome_helper(const char *s, int first, int last) {
    if (first >= last) {
        return true;
    }
    else if (s[first] != s[last]) {
        return false;
    }
    else {
        return is_palindrome_helper(s, first + 1, last - 1);
    }
}

bool is_palindrome(const char *s) {
    return is_palindrome_helper(s, 0, strlen(s) - 1);
}

int main(int argc, char *argv[]) {
    if (argc != 2) {
        exit(EXIT_FAILURE);
    }
    const char* s = argv[1];
    if (is_palindrome(s)) {
        printf("'%s' is a palindrome\n", s);
    }
    else {
        printf("'%s' is NOT a palindrome\n", s);
    }
    return EXIT_SUCCESS;
}
