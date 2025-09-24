#include <stdio.h>
#include <conio.h>

void main(){
    int a,b,choice;
    
    printf("Enter your choice: \n");
    printf("Add (1)");
    printf("Subtract (2)");
    printf("Multiply (3)");
    printf("Divide (4)");

    scanf("%d",&choice);
    scanf("Enter a %d",&a,"Enter b %d", &b);
    switch(choice)
    {
        case 1:
        printf("Sum of two numbers is: ", a+b);

        case 2:
        printf("Subtraction of two numbers is: ", a-b);

        case 3:
        printf("Multiplication of two numbers is: ", a*b);

        case 4:
        printf("Division of two numbers is: ", a/b);

        default:
        printf("You entered invalid value!");

    }
}