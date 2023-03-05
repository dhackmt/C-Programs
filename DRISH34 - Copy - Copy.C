#include<stdio.h>
#include<conio.h>
void main()
{
	int i,j,m,n,arr1[10][10],arr2[10][10],p,q,k,arr3[10][10];
	clrscr();
	printf("enter size of 1");
	scanf("%d%d",&m,&n);
      //  printf("enter %d numbers",m*n);
	printf("2");
	scanf("%d%d",&p,&q);
      //	printf("enter %d numbers",p*q);
	if(n!=p)
	{
	     printf("no");
	     getch();
	     return;
	}
	printf("%d",m*n);
	for(i=0;i<m;i++)
	{
		for(j=0;j<n;j++)
		{
		  scanf("%d",&arr1[i][j]);
		}
	}
	printf("%d",p*q);
	for(i=0;i<p;i++)
	{
		for(j=0;j<q;j++)
		{
		  scanf("%d",&arr2[i][j]);
		}
	}
	for(i=0;i<m;i++)
	{
	  for(j=0;j<q;j++)
	  {
	     arr3[i][j]=0;
	     for(k=0;k<n;k++)
	     {
		 arr3[i][j]=arr3[i][j]+(arr1[i][k]*arr2[k][j]);
	     }
	  }
	}

	printf("matrix is\n");
	{
	   for(i=0;i<m;i++)
	   {
	      for(j=0;j<n;j++)
	      {
		  printf("%d\t",arr1[i][j]);
	      }
	      printf("\n");
	   }
	}
	printf("matrix is\n");
	{
	   for(i=0;i<p;i++)
	   {
	      for(j=0;j<q;j++)
	      {
		  printf("%d\t",arr2[i][j]);
	      }
	      printf("\n");
	   }
	}

	printf("matrix is\n");
	{
	   for(i=0;i<m;i++)
	   {
	      for(j=0;j<q;j++)
	      {
		  printf("%d\t",arr3[i][j]);
	      }
	      printf("\n");
	   }
	}
	getch();
}