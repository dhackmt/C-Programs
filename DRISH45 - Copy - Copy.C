#include<stdio.h>
#include<conio.h>
void next(char,int);
void main()
{
	char x;
	int n;
	clrscr();
	printf("enter x");
	scanf("%c",&x);
       printf("enter n");
       scanf("%d",&n);

       //	printf("%c",x+1);
	next(x,n);
	getch();
}
void next(char a,int n)
{
	 int i;
       //	 printf("enter n");
	// scanf("%d",&n);
	 for(i=1;i<=n;i++)
	 {
	    printf("%c ",a++);
	 }
}