#include<stdio.h>
#include<conio.h>
void main()
{

	int i,j,k;
	clrscr();
	k=2;
	for(i=1;i<=2;i++)
	{
	  for(j=1;j<=i+1;j++)
	  {
	    printf("%d\t",k);
	    k++;\
	  }
	  printf("\n");
	}
	getch();
}