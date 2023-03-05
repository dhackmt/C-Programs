#include<stdio.h>
#include<conio.h>
void main()
{
	int arr[10],i,n,temp,j;
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
	   printf("%d",arr[i]);
	}
	for(i=0;i<n/2;i++)
	{
	      temp=arr[i];
	      arr[i]=arr[n-1-i];
	      arr[n-1-i]=temp;
	 }
	 printf("array in rev is\t");
	 for(i=0;i<n;i++)
	 {
	    printf("%d",arr[i]);

	 }


	 getch();
}
