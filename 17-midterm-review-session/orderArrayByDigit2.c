#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>

void orderArrayByDigit2(int array[]) {
    bool firstPrint = true;
    for (int digit = 0; digit < 10; ++digit) {
        for (int i = 0; i < 6; ++i) {
            int secondDigit = array[i] / 10 % 10;
            if (secondDigit == digit) {
                if (firstPrint) {
                    printf("%d", array[i]);
                    firstPrint = false;
                }
                else {
                    printf(", %d", array[i]);
                }
            }
        }
    }
    printf("\n");
}

int main(void) {
    int a[] = {269, 324, 62, 5, 111, 193};
    orderArrayByDigit2(a);
    return EXIT_SUCCESS;
}
