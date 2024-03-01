#include <stdio.h>
#include <stdlib.h>

int inputLength(void) {
    int length = 0;
    do {
        scanf("%d", &length);
    } while (length <= 0);
    return length;
}

int main(void) {
    printf("Enter number of rows: ");
    int numRows = inputLength();

    int *table[numRows];
    for (int i = 0; i < numRows; ++i) {
        printf("Enter number of columns for row %d: ", i + 1);
        int numCols = inputLength();
        table[i] = malloc(sizeof(int) * (numCols + 1));
        for (int j = 0; j < numCols; ++j) {
            table[i][j] = rand() % 100 + 1;
        }
        table[i][numCols] = -1;
    }

    for (int i = 0; i < numRows; ++i) {
        printf("Row %d:", i + 1);
        int j = 0;
        while (table[i][j] != -1) {
            printf(" %d", table[i][j]);
            ++j;
        }
        printf("\n");
        free(table[i]);
    }

    return EXIT_SUCCESS;
}
