#include<stdio.h>
#include<conio.h>
#include<math.h>
void main()
{

	int x,y,ans;
	clrscr();
	printf("enter values");
	scanf("%d%d",&x,&y);
	ans=pow(x,y);
	printf("ans is %d",ans);
	getch();
}