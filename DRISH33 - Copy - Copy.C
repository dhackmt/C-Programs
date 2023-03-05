#include<stdio.h>
#include<conio.h>
void main()
{
	int i,j,m,n,arr[10][10];
	clrscr();
	printf("enter size");
	scanf("%d%d",&m,&n);
	printf("enter %d numbers",m*n);
	for(i=0;i<m;i++)
	{
		for(j=0;j<n;j++)
	       {
		scanf("%d",&arr[i][j]);
	       }
	}
	printf("matrix is:\t");
	for(i=0;i<m;i++)
	{
	    for(j=0;j<n;j++)
	   {
	     printf("%d\t",arr[i][j]);

	   }
		printf("\n");
	}
	printf("lets see");
	for(i=0;i<m;i++)
	{
	    for(j=0;j<n;j++)
	    {
	       if(i==j)
	       {
		  if(arr[i][j]==1)
		  {
		      if(i>=j)
		      {
			 if(arr[i][j]==0)
			 {
			   if(i<=j)
			   {
			      if(arr[i][j]==0)
			      {
				printf("it is");
			      }
			      else
			      {
				printf("not");
			      }
			   }
			 }
		      }


		  }
	       }
	    }
	}

	getch();
}