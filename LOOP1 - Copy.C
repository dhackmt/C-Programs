#include<stdio.h>
#include<conio.h>
void main()
{
	int n,sum=0,dig;
	clrscr();
	printf("enter number");
	scanf("%d",&n);
	while(n!=0)
	{
	   dig=n%10;
	   sum=sum+dig;
	   n=n/10;
	}
	printf("sum is %d",sum);
	getch();
}