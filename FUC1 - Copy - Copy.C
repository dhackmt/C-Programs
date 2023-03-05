#include<stdio.h>
#include<conio.h>
#include<math.h>
int fact(int);
void main()
{
     int x,i,n;
     float sum=0;
     clrscr();
     printf("enter range");
     scanf("%d",&n);
     printf("enter value of x");
     scanf("%d",&x);
     for(i=1;i<=n;i++)
     {
	sum=sum+(pow(x,i)/fact(i));
     }
     printf("sum is %f",sum);
     getch();

}
int fact(x)
{
     int fact,j;
     fact=1;
     for(j=1;j<=x;j++)
     {
       fact=fact*j;
     }
     return fact;
}