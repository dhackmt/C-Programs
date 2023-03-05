#include<stdio.h>
#include<conio.h>
int main()
{
    int a,b,max;
    clrscr();
    printf("enter numbers");
    scanf("%d%d",&a,&b);
    if(a==b)
    {
       printf("both are equal");
       return 0;
    }
    max=(a>b)?a:b;
    printf("maximum number is %d",max);
    return 0;

}