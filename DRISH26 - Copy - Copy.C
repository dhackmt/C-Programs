#include<stdio.h>
#include<conio.h>
void main()
{
	int i,j;
	clrscr();
	for(i=2;i<=10;i=i+2)
	{
	   for(j=2;j<=i;j=j+2)
	   {
	     printf("%d\t",j);
	   }
	   printf("\n");
	}
	getch();
}