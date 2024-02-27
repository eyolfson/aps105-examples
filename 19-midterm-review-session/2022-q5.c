#include <stdio.h>

int main(void) {
    int first = 1, second = 2, data[4] = {10, 20, 30, 40};
    int *third = &second, *fourth = &first, *fifth = data + first + 1;

    (*third)++;
    (*fourth)++;
    data[second] = *fifth + first + *third + *fourth;

    printf("first = %d, second = %d, third = %d, fourth = %d, fifth = %d\n", first, second, *third, *fourth, *fifth);

    for (int i = 0; i < 4; i++) {
        printf("%d, ", data[i]);
    }

    printf("\n");
    return 0;
}
