#include <stdlib.h>
#include <stdio.h>

void printRow(int row) {
    for (int count = 1; count <= row; ++count) {
        printf("*");
    }
    printf("\n");
}

void printTriangle(int maxRow) {
    for (int row = 1; row <= maxRow; ++row) {
        printRow(row);
    }
}

int main(void) {
    printf("Number of rows: ");
    int n = 0;
    scanf("%d", &n);

    printTriangle(n);

    return EXIT_SUCCESS;
}
