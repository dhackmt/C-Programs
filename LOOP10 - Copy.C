#include<stdio.h>
#include<conio.h>
void main()
{
	int cnto=0,cnte=0,cntz=0,dig,n;
	clrscr();
	printf("enter n");
	scanf("%d",&n);
	while(n!=0)
	{
	   dig=n%10;
	   if(dig==0)
	   {
	      cntz++;
	   }
	   else if(dig%2==0)
	   {
	      cnte++;
	   }
	   else
	   {
	      cnto++;
	   }
	   n=n/10;
	}
	printf("zero,even,odd are %d,%d,%d",cntz,cnte,cnto);
	getch();
}