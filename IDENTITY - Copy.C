#include<stdio.h>
#include<conio.h>
void main()
{
      int arr[10][10],i,n,j,flag;
      clrscr();
      printf("enter size");
      scanf("%d",&n);
      printf("enter %d numbers",n*n);
      for(i=0;i<n;i++)
      {
	  for(j=0;j<n;j++)
	  {
	    scanf("%d",&arr[i][j]);
	  }
      }
       for(i=0;i<n;i++)
      {
	  for(j=0;j<n;j++)
	  {
	    printf("%d",arr[i][j]);
	  }
	  printf("\n");
      }
      flag=1;
       for(i=0;i<n;i++)
      {
	  for(j=0;j<n;j++)
	  {
	     if((i==j && arr[i][j]==1 )||(i!=j && arr[i][j]==0));
	     else
	     {
		flag=0;
		break;
	     }
	  }
      }
      if(flag==1)
      {
	  printf("yes");
      }
      else
      {
	 printf("no");
      }
      getch();
}