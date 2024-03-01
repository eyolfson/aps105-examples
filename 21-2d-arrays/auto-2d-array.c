#include <stdio.h>
#include <stdlib.h>

#define ARRAY_LENGTH(array) (sizeof((array))/sizeof((array)[0]))

#define NUM_COLS 3

int main(void) {
    int table[][NUM_COLS] = {
        {1, 2, 3},
        {4, 5, 6}
    };
    int numRows = ARRAY_LENGTH(table);
    for (int i = 0; i < numRows; ++i) {
        for (int j = 0; j < NUM_COLS; ++j) {
            printf("table[%d][%d]: %d\n", i, j, table[i][j]);
        }
    }
    return EXIT_SUCCESS;
}
