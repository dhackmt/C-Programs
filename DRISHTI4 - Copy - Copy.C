x#include<stdio.h>
#include<conio.h>
void main()
{
    int i,ans;
    clrscr();
    printf("first 50 numbers and thier squares are:");
    for(i=1;i<=50;i++)
    {
	ans=(i*i);
	printf("%d\n",i);
	printf("%d\n",ans);

    }
    getch();
}