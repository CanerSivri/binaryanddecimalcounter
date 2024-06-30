#include <stdio.h>
#include <string.h>
#include <math.h>

int binaryToDecimal(const char *binary) {
    int decimal = 0;
    int length = strlen(binary);
    for (int i = 0; i < length; i++) {
        if (binary[length - i - 1] == '1') {
            decimal += pow(2, i);
        }
    }
    return decimal;
}

int main() {
    char binaryNumber[65];  

    printf("Enter a binary number: ");
    scanf("%s", binaryNumber);

    int decimalNumber = binaryToDecimal(binaryNumber);

    printf("The decimal representation of %s is %d\n", binaryNumber, decimalNumber);
    system("pause");
    return 0;
}
