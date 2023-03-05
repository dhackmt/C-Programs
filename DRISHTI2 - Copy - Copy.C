#include<stdio.h>
#include<conio.h>
void main()
{
	 float s,it;
	 clrscr();
	 printf("enter salary");
	 scanf("%f",&s);
	 if(s<150000)
	 {
	    printf("no income tax");
	 }
	 else if(s>=150000 && s<=300000)
	 {
	   it=(20*s)/100;
	   printf("income tax is %f",it);
	 }
	 else if(s>300000)
	 {
	   it=(30*s)/100;
	   printf("income tax is %f",it);
	 }
getch();
}