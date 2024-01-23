#include <stdio.h>
#include <stdlib.h>

void printLine(int numStars) {
    for (int count = 1; count <= numStars; ++count) {
        printf("*");
    }
    printf("\n");
}

void printTriangle(int maxRow) {
    for (int row = 1; row <= maxRow; ++row) {
        printLine(row);
    }
}

int main(void) {
    printf("Number of rows: ");
    int n = 0;
    scanf("%d", &n);

    printTriangle(n);

    return EXIT_SUCCESS;
}
