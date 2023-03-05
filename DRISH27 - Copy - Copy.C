#include<stdio.h>
#include<conio.h>
void main()
{
	int arr[5],i,sum=0;
	clrscr();
	printf("enter 5 numbers");
	for(i=0;i<5;i++)
	{
	  scanf("%d",&arr[i]);

		sum=sum+arr[i];
	}
	printf("\narray is :\n");
	for(i=0;i<5;i++)
	{

		printf("\t%d\t",arr[i]);

	}
      //
      printf("sum is %d",sum);
	getch();
}