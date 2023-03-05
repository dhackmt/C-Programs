#include<stdio.h>
#include<conio.h>
int iseven(int);
void main()
{
	int n;
	clrscr();
	printf("enter a number");
	scanf("%d",&n);
	if(iseven(n))
	{
	   printf("number is even",n);
	}
	else
	{
	   printf("number is odd",n);
	}
	getch();
}
int iseven(int x)
{

       if(x%2==0)
       {

	   return 1;
       }
       else
       {
	   return 0;
       }

}
