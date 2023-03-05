#include<stdio.h>
#include<conio.h>
int power(int,int);
void main()
{
       int x,y,ans;
       clrscr();
       printf("enter x and y");
       scanf("%d%d",&x,&y);
       ans=power(x,y);
       printf("ans is %d",ans);
       getch();

}
int power(int a,int b)
{
    int z=1,i;
    for(i=1;i<=b;i++)
    {
       z=z*a;
    }
    return z;
}