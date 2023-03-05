#include<stdio.h>
#include<conio.h>
void main()
{
	int temp,n,dig,sum=0;
	clrscr();
	printf("enter n");
	scanf("%d",&n);
	temp=n;
	while(n!=0)
	{
	      dig=n%10;
	      sum=sum+(dig*dig*dig);
	      n=n/10;
	}
	if(temp==sum)
	{
	  printf("%d is armstrong",temp);
	}
	else
	{
	    printf("%d is not",temp);
	}
	getch();
}