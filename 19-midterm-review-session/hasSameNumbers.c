#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>

bool hasSameNumbersSoln(int *a, int *b) {
    int countA = 0, countB = 0;
    while (a[countA] >= 0) {
        countA++;
    }
    while (b[countB] >= 0) {
        countB++;
    }
    if (countA != countB) {
        return false;
    }
    bool same = true;
    for (int i = 0; i < countA && same; i++) {
        same = false;
        for (int j = 0; j < countB && !same; j++) {
            if (a[i] == b[j])
                same = true;
        }
    }
    return same;
}

bool hasSameNumbers(int *a, int *b) {
    int i = 0;
    while (a[i] != -1) {
        bool found = false;
        int j = 0;
        while (b[j] != -1) {
            if (a[i] == b[j]) {
                found = true;
                break;
            }
            ++j;
        }
        if (!found) {
            return false;
        }
        ++i;
    }
    return true;
}

int main(void) {
    int a1[] = {1, 2, 3, 4, 5, -1};
    int a2[] = {5, 4, 1, 3, 2, -1};
    printf("hasSameNumbers: %d\n", hasSameNumbers(a1, a2));
    printf("hasSameNumbersSoln: %d\n", hasSameNumbersSoln(a1, a2));
    return EXIT_SUCCESS;
}
