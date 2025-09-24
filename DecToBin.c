#include <stdio.h>
#include <conio.h>

void main(){
    int num, r[100], i,j;
    clrscr();
    printf("Enter decimal number: ");
    scanf("%d",&num);
    for (i=0;num!=0;i++){
        r[i]=num%2;
        num=num/2;
    }
    printf("Binary of given number is ");
    for(j=i;j>0;j--){
        printf("%d",r[j]);
    }
    getch();
}