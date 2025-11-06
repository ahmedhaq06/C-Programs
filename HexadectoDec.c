#include <stdio.h>

int main() {
    int hexNumber;

    printf("Enter a hexadecimal number: ");
    scanf("%x", &hexNumber);
    printf("Decimal: %d\n", hexNumber);

    return 0;
}