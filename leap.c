#include <stdio.h>

void main(){
    int a;
    clrscr();
    printf("Enter the year to check leap year: ");
    scanf("%d",&a );
    if((a%400==0)||(a%4==0)&&(a%100!=0)){
        printf("The year you entered Leap year");
    }
    else{
        printf("The year you entered is not a leap year");
    }
    getch();
}