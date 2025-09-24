#include <stdio.h>


void main(){
    int num,i;

    printf("Enter the number to check prime: ");
    scanf("%d",&num);
    for (i=2;i<=num;i++){
        if (num%i==0){
            break;
        }
    }

    if (i==num){
        printf("Number is prime");
    }
    else{
        printf("Number is not prime");
    }
}