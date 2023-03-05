#include<stdio.h>
#include<conio.h>
void main()
{
	char x;
	clrscr();
	printf("enter a character");
	scanf("%c",&x);

	if(x>=48 && x<=58)
	{
	   printf("%c is a digit",x);
	}
	else if(x>=97 && x<=122)
	{
	   printf("%c is a lowercase alphabet",x);
	}
	else if(x>=65 && x<=90)
	{
	   printf("%c is a uppercase alphabet",x);
	}
	getch();
}