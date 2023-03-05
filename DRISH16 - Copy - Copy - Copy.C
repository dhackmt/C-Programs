#include<stdio.h>
#include<conio.h>
#include<math.h>
void main()

{
	int x1,x2,y1,y2,temp1,temp2;
	float ans;
	clrscr();
	printf("enter 1");
	scanf("%d%d",&x1,&y1);
	printf("2");
	scanf("%d%d",&x2,&y2);
	temp1=pow((x2-x1),2);
	temp2=pow((y2-y1),2);
	ans=sqrt(temp1+temp2);
	printf("%.2f is ans",ans);
	getch();
}
