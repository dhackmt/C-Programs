#include<stdio.h>
#include<conio.h>
void main()
{
      int n1,n2,temp;
      clrscr();
      printf("enter 2 numbers");
      scanf("%d%d",&n1,&n2);
      printf("numbers before swapping are: %d %d",n1,n2);
      temp=n1^n2;
      n1=temp^n1;
      n2=temp^n2;
      printf("numbers after swapping are: %d %d",n1,n2);
      getch();

}