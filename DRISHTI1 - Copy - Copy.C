#include<stdio.h>
#include<conio.h>
void main()
{
     char x;
     clrscr();
     printf("enter a character");
     scanf("%c",&x);
     if(x>='0' && x<='9')
     {
	printf("%c is digit between 0 to 9",x);
     }
     else
     {
       printf("%c is not a digit",x);
     }
     getch();
}