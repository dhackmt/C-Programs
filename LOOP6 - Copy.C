#include<stdio.h>
#include<conio.h>
void main()
{
	int i,x,y,ans;
	clrscr();
	printf("enter values");
	scanf("%d%d",&x,&y);
	ans=1;
	for(i=1;i<=y;i++)
	{
	   ans=ans*x;
	}

	printf("%d",ans);
	 getch();
}