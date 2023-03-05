#include<stdio.h>
#include<conio.h>
void main()
{
     int y;
     clrscr();
     printf("enter a year");
     scanf("%d",&y);
     if(y%4==0)
     {
	printf("%d is a leap year",y);
     }
     else
     {
	printf("%d is not a leap year",y);
     }
     getch();

}