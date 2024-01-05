#include <stdio.h>

int main(void) {
    int x = 42;
    int y = 43;
    scanf("%d%d", &x, &y);
    printf("Got %d %d\n", x, y);
    return x;
}
