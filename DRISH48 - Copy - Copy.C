#include<stdio.h>
#include<conio.h>
#include<math.h>
int fact(int);
void main()
{
	int i,n,x;
	float sum=0.0f;
	clrscr();
	printf("enter x");
	scanf("%d",&x);
	printf("enter n");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		printf("%d %f\n",fact(i),sum);
	    sum=sum+(pow(x,i)/fact(i));
	}
	printf("%f",sum);
	getch();
}
int fact(int x)
{
	   int fact=1,j;
	   for(j=1;j<=x;j++)
	   {
	       fact=fact*j;
	   }
	   return fact;

}