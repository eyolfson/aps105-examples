#include <stdio.h>
#include <stdlib.h>

int inputLength(void) {
    int length = 0;
    do {
        scanf("%d", &length);
    } while (length <= 0);
    return length;
}

void randomizeTable(int numRows, int numCols, int table[][numCols]) {
    for (int i = 0; i < numRows; ++i) {
        for (int j = 0; j < numCols; ++j) {
            table[i][j] = rand() % 100 + 1;
        }
    }
}

void outputTable(int numRows, int numCols, int table[][numCols]) {
    for (int i = 0; i < numRows; ++i) {
        printf("Row %d:", i + 1);
        for (int j = 0; j < numCols; ++j) {
            printf(" %d", table[i][j]);
        }
        printf("\n");
    }
}

int main(void) {
    printf("Enter the number of rows: ");
    int numRows = inputLength();
    printf("Enter the number of columns: ");
    int numCols = inputLength();

    int table[numRows][numCols];

    randomizeTable(numRows, numCols, table);
    outputTable(numRows, numCols, table);

    return EXIT_SUCCESS;
}
