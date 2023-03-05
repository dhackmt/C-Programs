#include<stdio.h>
#include<conio.h>
int add(int);
void main()
{
	int n,sum;
	clrscr();
	printf("enter a number");
	scanf("%d",&n);
	sum=add(n);
	printf("sum is %d",sum);
	getch();
}
int add(int x)
{
       int sum=0,dig;
       while(x!=0)
       {
	   dig=x%10;
	   sum=sum+dig;
	   x=x/10;
       }
       return sum;
}