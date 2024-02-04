#include <stdio.h>
#include <stdlib.h>

int main(void) {
    int grade1 = 75;
    int grade2 = 83;
    int grade3 = 99;
    int grade4 = 64;
    int grade5 = 72;
    int average = (grade1 + grade2 + grade3 + grade4 + grade5) / 5;
    printf("Average: %d\n", average);
    return EXIT_SUCCESS;
}
