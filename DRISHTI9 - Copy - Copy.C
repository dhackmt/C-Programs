#include<stdio.h>
#include<conio.h>
void main()
{
	char x;
	clrscr();
	printf("enetr a digit");
	scanf("%c",&x);
	if(isdigit(x))
	{
	 x=tolower(x);
	 printf("%c",x);
	}
	getch();
}