#include<stdio.h>
#include<conio.h>
void main()
{
	int i,j;
	clrscr();
	for(i=1;i<=2;i++)
	{
	  for(j=1;j<=i+1;j++)
	 {
	      printf("%d\t",j);
	  }
	  printf("\n");
	}

	getch();

}