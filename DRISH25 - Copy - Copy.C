#include<stdio.h>
#include<conio.h>
void main()
{
	int i,j;
	clrscr();
	for(i=65;i<=68;i++)
	{
	  for(j=65;j<=i;j++)
	  {
	     printf("%c%c",j,j+32);
	  }
	  printf("\n");
	}
	getch();
}