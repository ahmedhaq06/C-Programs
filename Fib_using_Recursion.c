#include <stdio.h>

int fibRecursive(int n) {
    if (n == 0) {
        return 0;
    }
    if (n == 1) {
        return 1;
    }
    return fibRecursive(n - 1) + fibRecursive(n - 2);
}

int main() {
    int n, i;

    printf("Enter the number of terms: ");
    scanf("%d", &n);

    printf("Fibonacci Series: ");

    for (i = 0; i < n; i++) {
        printf("%d ", fibRecursive(i));
    }
    
    printf("\n");

    return 0;
}