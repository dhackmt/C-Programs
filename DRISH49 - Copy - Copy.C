#include<stdio.h>
#include<conio.h>
int fact(int);
void main()
{
    int i,n,ans;
    clrscr();
    printf("enter n");
    scanf("%d",&n);
    ans=fact(n);
    printf("factorial of n is %d",ans);
    getch();
}
int fact(int n)
{
     int z,i;
     z=1;
     for(i=1;i<=n;i++)
     {
	z=z*i;
     }

     return z;

}