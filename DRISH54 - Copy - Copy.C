#include<stdio.h>
#include<conio.h>
void main()
{
	int arr[10],temp,n,i;
	clrscr();


	printf("enter n elements");
		scanf("%d",&n);
	printf("enter n ");
	for(i=0;i<n;i++)
	{
	    scanf("%d",&arr[i]);
	}
	printf("array is :\n");
	for(i=0;i<n;i++)
	{
	    printf("%d\n",arr[i]);

	}

	for(i=0;i<n/2;i++)
	{
		temp=arr[i];
		arr[i]=arr[n-1-i];
		arr[n-1-i]=temp;

	}

	printf("array reverse is:\n");
	for(i=0;i<n;i++)
	{
	   printf("%d",arr[i]);
	}

	getch();
}