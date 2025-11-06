#include <stdio.h>

int main() { // It's good practice to use int main() instead of void main()
    int a, b, choice;

        printf("Enter your choice: \n");
        printf("1. Add\n");
        printf("2. Subtract\n");
        printf("3. Multiply\n");
        printf("4. Divide\n");
        printf("Choice: ");
                                
        scanf("%d", &choice);

        printf("Enter the first number (a): ");
        scanf("%d", &a);

        printf("Enter the second number (b): ");
        scanf("%d", &b);

        switch (choice) {
            case 1:
                printf("Sum of %d and %d is: %d\n", a, b, a + b);
                break; 

            case 2:
                printf("Difference of %d and %d is: %d\n", a, b, a - b);
                break; 

            case 3:
                printf("Product of %d and %d is: %d\n", a, b, a * b);
                break; 

            case 4:
                if (b == 0) {
                    printf("Error: Cannot divide by zero.\n");
                } else {
                    printf("Quotient of %d and %d is: %d\n", a, b, a / b);
                }
                break; 

            default:
                printf("You entered an invalid choice!\n");
                break; 
        }
    return 0; 
}
                                                                                                                                                                                                                                                                                                