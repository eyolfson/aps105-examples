#include <stdio.h>
#include <stdlib.h>

void printNum(char *str) {
    int i = 0;
    while (str[i] == '0') {
        i++;
    }
    // Complete the C program here to remove leading zeros in the string str
    puts(str);
}

int main(void) {
    char s[10] = "000089876";
    printNum(s);
    return 0;
}
