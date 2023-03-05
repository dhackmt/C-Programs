#include<stdio.h>
#include<conio.h>
void main()
{
	int i,j;
	clrscr();

	for(i=4;i>=1;i--)
	{
	  for(j=i;j<=5;j++)
	  {
		printf("%d\t",j);
	       //	k++;

	  }
	  printf("\n");

	}

	getch();
}
