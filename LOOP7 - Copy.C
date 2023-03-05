#include<stdio.h>
#include<conio.h>
void main()
{
	  int n,dig,rev=0,temp;
	  clrscr();
	  printf("enter n");
	  scanf("%d",&n);
	  temp=n;
	  while(n!=0)
	  {
	      dig=n%10;
	      rev=(rev*10)+dig;
	      n=n/10;
	  }
	  if(rev==temp)
	  {
	     printf("yes");
	  }
	  else
	  {
	    printf("no");
	  }

	  getch();
}