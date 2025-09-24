#include <stdio.h>

void main(){
    int a,b,c, max,n_max;
    printf("Enter three numbers: ");
    scanf("%d %d %d",&a,&b,&c);

    if (a>b && a>c){
        max=a;
        if(b>c){
            n_max=b;
        }
        else{
            n_max=c;
        }
    }

    if (b>a && b>c){
        max=b;
        if(a>c){
            n_max=a;
        }
        else{
            n_max=c;
        }
    }

    if (c>b && c>a){
        max=c;
        if(a>b){
            n_max=a;
        }
        else{
            n_max=b;
        }
    }
    printf("Maximum number is: %d",max);
    printf("Next max is: %d",n_max);
}