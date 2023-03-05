#include<stdio.h>
#include<conio.h>
void main()
{
	int amt,d1,d5,d10;
	clrscr();
	printf("amt");
	scanf("%d",&amt);
	d10=amt/10;
	amt=amt%10;
	d5=amt/5;
	amt=amt%5;
	d1=amt/1;
	amt=amt%1;
	printf("10 is %d,5 is %d,1 is %d",d10,d5,d1);
	getch();
}