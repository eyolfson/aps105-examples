#include <stdio.h>
#include <stdlib.h>

int main(void) {
    printf("Input an integer: ");
    int num = 0;
    scanf("%d", &num);
    if (num % 2 == 0) {
        printf("The number is even!\n");
    }
    if (num >= 10) {
        printf("The number is 10 or greater!\n");
    }
    else {
        printf("The number is less than 10!\n");
    }
    return 0;
}
