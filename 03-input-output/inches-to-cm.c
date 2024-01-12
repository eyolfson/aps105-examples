#include <stdio.h>

int main(void) {
    const double InchesPerCM = 2.54;
    double inches;
    printf("Enter length (inches): ");
    scanf("%lf", &inches);
    double cm = inches * InchesPerCM;
    printf("Converted length (cm): %.2lf\n", cm);
    return 0;
}
