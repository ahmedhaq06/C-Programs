#include <stdio.h>

int fact(int n){
    int i,fact=1;
    if (n==0){
        return 1;
    }
    else {
        for (i=1;i<=n;i++){
            fact=fact*i;
        }
    }
    printf("%d",fact);
}

void main(){
    int num;
    printf("Enter a number to check factorial: ");
    scanf("%d",&num);
    fact(num);
}