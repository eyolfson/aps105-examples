#include <stdio.h>

int main(void) {
    int numOfRows;
    printf("Enter number of rows: ");
    scanf("%d", &numOfRows);
    for (int row = 1; row <= numOfRows; row++) {
        for (int col = 1; col <= 2 * numOfRows - 1; col++) {
            if (row == 1 // Top
                || row == numOfRows // Bottom
                || col == numOfRows - row + 1 // Bottom Left Diagonal
                || col == row + numOfRows - 1 // Bottom Right Diagonal
                || col == 1 // Left
                || col == 2 * numOfRows - 1) { // Right
                printf("*");
            }
            else {
                printf(" ");
            }
        }
        printf("\n");
    }
    return 0;
}
