#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>

enum month {
    JANUARY = 1,
    FEBRUARY = 2,
    MARCH = 3,
    APRIL = 4,
    MAY = 5,
    JUNE = 6,
    JULY = 7,
    AUGUST = 8,
    SEPTEMBER = 9,
    OCTOBER = 10,
    NOVEMBER = 11,
    DECEMBER = 12,
};

bool isWinterSemester(enum month month) {
    return month == JANUARY
           || month == FEBRUARY
           || month == MARCH
           || month == APRIL;
}

int main(void) {
    enum month month;
    printf("Enter a month (1-12): ");
    scanf("%d", &month);
    if (isWinterSemester(month)) {
        printf("The month is probably the winter semester\n");
    }
    else {
        printf("The month is not in the winter semester\n");
    }
    return EXIT_SUCCESS;
}
