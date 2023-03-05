#include<stdio.h>
#include<conio.h>
int isper(int);
void main()
{
	int n;
	clrscr();
	printf("enter a number");
	scanf("%d",&n);
	if(isper(n))
	{
	  printf("%d number is perfect",n);
	}
	else
		{
	   printf(" %d number is not perefct",n);
	}
	getch();
}
int isper(int x)
{
       int sum=0,i;
       for(i=1;i<=x/2;i++)
       {
	  sum=sum+i;
       }
       if(sum==x)
       {
	  return 1;
       }
       else
       {
	  return 0;
       }
}