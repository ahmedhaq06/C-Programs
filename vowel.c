

#include <stdio.h>
#include <conio.h>


void main()
 {
 char ch;
clrscr();
 printf("Enter an alphabet: ");
 scanf(" %c", &ch);

   
 if ((ch >= 'a' && ch <= 'z') || (ch >= 'A' && ch <= 'Z'))
 {

if (ch == 'a' || ch == 'A' ||  ch == 'e' || ch == 'E' || ch == 'i' || ch == 'I' || ch == 'o' || ch == 'O' || ch == 'u' || ch == 'U')
 {
         printf("%c is a Vowel.\n", ch);
        } 

else {
printf("%c is a   Consonant.\n", ch);
        }

    } 

else {
        printf("Error! The input is not an alphabet.\n");
    }

    getch();
}