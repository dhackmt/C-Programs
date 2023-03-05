#include<stdio.h>
#include<conio.h>
void main()
{
    int s,e,sum=0,i;
    clrscr();
    printf("enter start and end");
    scanf("%d%d",&s,&e);
    sum=0;
    for(i=s;i<=e;i++)
    {
	sum=sum+i;

    }
    printf("sum is %d",sum);
    getch();
}