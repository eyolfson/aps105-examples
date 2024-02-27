#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>

bool isPalindrome(char sequence[], int size) {
    for (int i = 0; i < size / 2; ++i) {
        if (sequence[i] != sequence[size - 1 - i]) {
            return false;
        }
    }
    return true;
}

int main(void) {
    char s1[] = {'r', 'a', 'd', 'a', 'r'};
    printf("isPalindrome %d\n", isPalindrome(s1, 5));
    return EXIT_SUCCESS;
}
