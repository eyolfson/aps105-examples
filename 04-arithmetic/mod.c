#include <stdio.h>
#include <stdlib.h>

int main(void) {
    int a = 5;
    int b = 2;
    printf("%d %d %d %d\n", a, b, a / b, a % b);
    a = 5;
    b = -2;
    printf("%d %d %d %d\n", a, b, a / b, a % b);
    a = -5;
    b = 2;
    printf("%d %d %d %d\n", a, b, a / b, a % b);
    a = -5;
    b = -2;
    printf("%d %d %d %d\n", a, b, a / b, a % b);
    return 0;
}
