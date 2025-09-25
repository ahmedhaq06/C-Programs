#include <stdio.h>

void main() {
    int limit, i, j;

    printf("Enter the upper limit: ");
    scanf("%d", &limit);

    printf("Prime numbers up to %d are:\n", limit);

    for (i = 2; i <= limit; i++) {
        
        for (j = 2; j <= i / 2; j++) {
            if (i % j == 0) {
                break;
            }
        }

        if (j > i / 2) {
            printf("%d ", i);
        }
    }

    printf("\n");
}