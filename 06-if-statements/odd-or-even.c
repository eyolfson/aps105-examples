#include <stdio.h>
#include <stdlib.h>

int main(void) {
    printf("Input an integer: ");
    int num = 0;
    scanf("%d", &num);
    if (num % 2 == 0) {
        printf("The number is even!\n");
    }
    else {
        printf("The number is odd!\n");
    }
    return 0;
}
