#include<stdio.h>
#include<conio.h>
#include<math.h>
void main()
{
	 int x1,x2,y1,y2,temp1,temp2;
	 float ans;
	 clrscr();
	 printf("enter values of x");
	 scanf("%d%d",&x1,&x2);
	 printf("enter values of y");
	 scanf("%d%d",&y1,&y2);
	 temp1= pow((x2-x1),2);
	 temp2=pow((y2-y1),2);
	 ans=sqrt(temp1+temp2);
	 printf("ans is %.2f",ans);
	 getch();
}
