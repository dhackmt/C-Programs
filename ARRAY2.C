#include<stdio.h>
#include<conio.h>
void main()
{
	int arr[10],i,n,max,min;
	clrscr();
	printf("enter size");
	scanf("%d",&n);
	printf("enter n elements");
	for(i=0;i<n;i++)
	{
	   scanf("%d",&arr[i]);
	}
	printf("\tarray is :");
	for(i=0;i<n;i++)
	{
	   printf("%d\t",arr[i]);
	}
	max=arr[0];
	for(i=0;i<n;i++)
	{

	    if(arr[i]>max)
	    {
	       max=arr[i];
	    }
	}
	min=arr[0];
	for(i=0;i<n;i++)
	{

	  if(arr[i]<min)
	  {
	     min=arr[i];
	  }
	}
	printf("%d is max",max);
	printf("%d is min",min);

	getch();
}