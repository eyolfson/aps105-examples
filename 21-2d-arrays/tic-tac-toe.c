#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>


void checkWinner(int size, char board[][size]) {
    for (int i = 0; i < size; ++i) {
        char rowChar = board[i][0];
        char colChar = board[0][i];
        bool rowWin = rowChar == 'x' || rowChar == 'o';
        bool colWin = colChar == 'x' || colChar == 'o';
        for (int j = 1; j < size; ++j) {
            rowWin = rowWin && rowChar == board[i][j];
            colWin = colWin && colChar == board[j][i];
        }
        if (rowWin) {
            printf("%c wins in row %d\n", rowChar, i + 1);
        }
        if (colWin) {
            printf("%c wins in column %d\n", colChar, i + 1);
        }
    }

    char topLeftChar = board[0][0];
    bool topLeftWin = topLeftChar == 'x' || topLeftChar == 'o';
    char bottomLeftChar = board[0][size - 1];
    bool bottomLeftWin = bottomLeftChar == 'x' || bottomLeftChar == 'o';
    for (int i = 1; i < size; ++i) {
        topLeftWin = topLeftWin && topLeftChar == board[i][i];
        bottomLeftWin = bottomLeftWin && bottomLeftChar == board[i][size-1-i];
    }
    if (topLeftWin) {
        printf("%c wins in the top left diagonal\n", topLeftChar);
    }
    if (bottomLeftWin) {
        printf("%c wins in the bottom left diagonal\n", bottomLeftChar);
    }
}

int main(void) {
    const int SIZE = 3;

    char board[SIZE][SIZE];
    printf("Input xs and os (or . for an empty space):\n");
    for (int i = 0; i < SIZE; ++i) {
        for (int j = 0; j < SIZE; ++j) {
            scanf(" %c", &board[i][j]);
        }
    }

    checkWinner(SIZE, board);

    return EXIT_SUCCESS;
}
