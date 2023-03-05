#include<stdio.h>
#include<conio.h>
void main()
{
	char x;
	clrscr();
	printf("enter character");
	scanf("%c",&x);
	printf("ascii code for %c is %d",x,x);
     //	printf("/nnext character %c code is %d",x+1,x+1);
      //	printf("/nprevious character %c code is %d",x-1,x-1);
	getch();
}