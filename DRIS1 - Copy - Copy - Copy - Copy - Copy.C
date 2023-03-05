#include<stdio.h>
#include<conio.h>
void main()
{
	int a,b,c,d,e;
	float f,g;
	clrscr();
	printf("enter two numbers");
	scanf("%d%d",&a,&b);
	c=a+b;
	printf("\n%d is addition",c);
	d=a-b;
	printf("\n%d is subtraction",d);
	e=a*b;
	printf("\n%d is multiplication",e);
	f=a/b;
	printf("\n%f is division",f);
	e=a%b;
	printf("\n%f is a mod b",e);
	getch();

}