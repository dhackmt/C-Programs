#include<stdio.h>
#include<conio.h>
#include<math.h>
int fact(int);
void main()
{
     int i,n,x;
     float sum=0;
     clrscr();
     printf("enter range");
     scanf("%d",&n);
     printf("enter x ");
     scanf("%d",&x);
     for(i=1;i<=n;i++)
     {
	sum=sum+(pow(x,i)/fact(i));
     }
      printf("sum is %.2f",sum);
      getch();
}
int fact(int x)
{
    int j,fact;
    fact=1;
    for(j=1;j<=x;j++);
    {
	 fact=fact*j;
    }
    return fact;
}