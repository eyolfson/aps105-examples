#include <stdio.h>
#include <stdlib.h>

#define NUM_ROWS 2
#define NUM_COLS 3

int main(void) {
    int table[NUM_ROWS][NUM_COLS] = {
        {1, 2, 3},
        {4, 5, 6}
    };
    for (int i = 0; i < NUM_ROWS; ++i) {
        for (int j = 0; j < NUM_COLS; ++j) {
            printf("table[%d][%d]: %d\n", i, j, table[i][j]);
        }
    }
    return EXIT_SUCCESS;
}
