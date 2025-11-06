#include <stdio.h>

int main() {
    int decimalNumber, originalNumber;
    int binaryNumber[32];
    int i = 0;

    printf("Enter a decimal number: ");
    scanf("%d", &decimalNumber);

    originalNumber = decimalNumber;

    if (decimalNumber == 0) {
        printf("Binary: 0\n");
        return 0;
    }

    while (decimalNumber > 0) {
        binaryNumber[i] = decimalNumber % 2;
        decimalNumber = decimalNumber / 2;
        i++;
    }

    printf("Binary of %d is: ", originalNumber);
    for (int j = i - 1; j >= 0; j--) {
        printf("%d", binaryNumber[j]);
    }
    printf("\n");

    return 0;
}