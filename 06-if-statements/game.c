#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void) {
    /* Seed the random number generator using the current timestamp. */
    srand(time(NULL));
    printf("Enter your bet, even or odd? (0 for even, 1 for odd): ");
    int bet;
    scanf("%d", &bet);
    int dice = rand() % 6 + 1;
    printf("Rolled a %d\n", dice);
    if (dice % 2 == bet) {
        printf("You win!\n");
    }
    else {
        printf("You lose!\n");
    }
    return 0;
}
