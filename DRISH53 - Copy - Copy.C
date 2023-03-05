#include<stdio.h>
#include<conio.h>
void main()
{
      int i,sum=0,s,e;
      clrscr();
      printf("enter start and end");
      scanf("%d%d",&s,&e);
      for(i=s;i<=e;i++)
      {
	   sum=sum+i;

      }
      printf("sum is %d",sum);
      getch();

}