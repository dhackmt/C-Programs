
#include<stdio.h>
#include<conio.h>
void main()
{
	int n,sum=0,dig,temp;
	clrscr();
	printf("enter a number");
	scanf("%d",&n);
	temp=n;
	while(n!=0)
	{
	    dig=n%10;
	    sum=dig*dig*dig;
	    n=n/10;
	}
	if(temp==sum)
	{
	   printf("%d is an armstrong number",temp);
	}
	else
	{
	   printf("%d is not an armstrong number",temp);
	}
	getch();
}