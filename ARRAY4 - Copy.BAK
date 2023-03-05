#include<stdio.h>
#include<conio.h>
void main()
{
	int arr[10],i,n,j,temp;
	clrscr();
	printf("enter size");
	scanf("%d",&n);
	printf("enter n elements");
	for(i=0;i<n;i++)
	{
	   scanf("%d",&arr[i]);
	}
	printf("\tarray  before sorting is :");
	for(i=0;i<n;i++)
	{
	   printf("%d",arr[i]);
	}
	for(i=0;i<n;i++)
	{
	     for(j=i+1;j<n;j++)
	     {
		 if(arr[i]>arr[j])
		 {
		     temp=arr[i];
		     arr[i]=arr[j];
		     arr[j]=temp;
		  }

		 }

	     }

	  printf("array after sorting is:\t");
	  for(i=0;i<n;i++)
	  {
	    printf("%d",arr[i]);
	  }


       getch();
}