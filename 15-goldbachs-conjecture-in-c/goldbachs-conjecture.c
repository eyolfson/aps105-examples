#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>

int userInput(void);
void conjectureOutput(int x);
bool isPrime(int x);
int nextPrime(int x);
bool conjectureHolds(int x, int* first, int* second);

int main(void) {
    int x = userInput();
    conjectureOutput(x);
    return EXIT_SUCCESS;
}

int userInput(void) {
    int input = 0;
    printf("Enter an even number >2 to test the Goldback conjecture: ");
    scanf("%d", &input);
    while (input % 2 != 0 || input <= 2) {
        printf("Your input was invalid, please enter aven even number >2: ");
        scanf("%d", &input);
    }
    return input;
}

bool isPrime(int x) {
    if (x == 1) {
        return false;
    }
    for (int divisor = 2; divisor < x; ++divisor) {
        if (x % divisor == 0) {
            return false;
        }
    }
    return true;
}

int nextPrime(int x) {
    do {
        ++x;
    } while (!isPrime(x));
    return x;
}

bool conjectureHolds(int x, int *first, int *second) {
    *first = 2;
    *second = x - *first;
    while (*first <= *second) {
        if (isPrime(*second)) {
            return true;
        }

        *first = nextPrime(*first);
        *second = x - *first;
    }
    return false;
}

void conjectureOutput(int x) {
    int first = 0;
    int second = 0;
    if (conjectureHolds(x, &first, &second)) {
        printf("Goldbach's conjecture holds for %d: %d and %d\n", x, first, second);
    }
    else {
        printf("Goldbach's conjecture DOES NOT hold for %d\n", x);
    }
}
