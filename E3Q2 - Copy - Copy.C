#include<stdio.h>
#include<conio.h>
void main()
{
  int arr1[10][10],m,n,sum,sum1,i,j,flag;
  clrscr();
  printf("enter size  for 1");
  scanf("%d%d",&m,&n);
  printf("enter %d numbers",m*n);
  for(i=0;i<m;i++)
  {
    for(j=0;j<n;j++)
    {
     scanf("%d",&arr1[i][j]);
    }
  }
    for(i=0;i<m;i++)
  {
    for(j=0;j<n;j++)
    {
     printf("%d ",arr1[i][j]);
    }
    printf("\n");
  }
      for(i=0;i<m;i++)
  {
    for(j=0;j<n;j++)
    {
       flag=0;
       if(i==j && arr1[i][j]==1 || i!=j && arr1[i][j]==0)
       {
	  flag=1;
       }

    }
  }
  if(flag==1)
  {
     printf("indentity matrix");

  }
  else
  {
     printf("not");
  }
  getch();
 }

