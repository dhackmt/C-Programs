#include<stdio.h>
#include<conio.h>
void main()
{
	int i,j,m,n,arr[10][10],arr2[10][10],arr3[10][10];
	clrscr();
	printf("enter size");
	scanf("%d%d",&m,&n);
	printf("enter elements",m*n);
	for(i=0;i<m;i++)
	{
	     for(j=0;j<n;j++)
	     {
		scanf("%d",&arr[i][j]);
	     }
	}
	for(i=0;i<m;i++)
	{
	   for(j=0;j<n;j++)
	   {
	     printf("%d\t",arr[i][j]);

	    }
	    printf("\n");
	}
      //	printf("sum of d,u,l is %d,%d,%d",sumd,sumu,suml);

	printf("enter size");
	scanf("%d%d",&m,&n);
	printf("enter elements",m*n);
	for(i=0;i<m;i++)
	{
	     for(j=0;j<n;j++)
	     {
		scanf("%d",&arr2[i][j]);
	     }
	}
	for(i=0;i<m;i++)
	{
	   for(j=0;j<n;j++)
	   {
		printf("%d\t",arr2[i][j]);
	   }
	   printf("\n");
	}
	for(i=0;i<m;i++)
	{
	  for(j=0;j<n;j++)
	  {
		arr3[i][j]=arr[i][j]+arr2[i][j];
	  }
	  }
	for(i=0;i<m;i++)
	{
	     for(j=0;j<n;j++)
	     {
		printf("%d\t",arr3[i][j]);
	     }
	     printf("\n");
	}

	getch();
}