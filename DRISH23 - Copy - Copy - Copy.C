#include<stdio.h>
#include<conio.h>
void main()
{
	int i,j,k;
	clrscr();
	k=65;
	for(i=3;i>=1;i--)
	{
	  for(j=1;j<=i;j++)
	  {
	     printf("%c",k);
	     k++;
	  }
	  printf("\n");
	}

	getch();
}