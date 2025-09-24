#include <stdio.h>

int power(int x, int y){
    int i,result=1;

    for (i=1;i<=y;i++){
        result=result*x;
    }

    return result;
}

void main(){
    int a,b,c;

    printf("Enter two numbers: ");
    scanf("%d %d",&a, &b);

    c=power(a,b);
    printf("%d power %d is %d",b,a,c);
}