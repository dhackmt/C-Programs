#include<stdio.h>
#include<conio.h>
void main()
{
	int n,i,sum=0;
	clrscr();
	printf("enter n");
	scanf("%d",&n);
	for(i=2;i<=n/2;i++)
	{
	    if(n%i==0)
	    {
	       sum=sum+i;
	    }
	}
	if(sum==n)
	{
	   printf("%d is perfect",n);
	}
	else
	{
	   printf("%d is not",n);
	}
	getch();
}