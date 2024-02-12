#include <stdio.h>

int barcodeDigit(long barcode);

int main(void) {
    long example = 3600029145;
    printf("barcodeDigit(%ld) = %d\n", example, barcodeDigit(example));
    return 0;
}

int barcodeDigit(long barcode) {
    int oddSum = 0;
    int evenSum = 0;
    while (barcode > 0) {
        oddSum += barcode % 10;
        barcode /= 10;
        evenSum += barcode % 10;
        barcode /= 10;
    }
    int m = (oddSum * 3 + evenSum) % 10;
    if (m != 0) {
        return 10 - m;
    }
    return m;
}
