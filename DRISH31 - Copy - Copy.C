#include<stdio.h>
#include<conio.h>
void main()
{
	int arr[5],arr1[5],i,j,k,arr3[20];
	clrscr();
	printf("enter for 1");
	scanf("%d%d",&arr,&arr1);
	for(i=0;i<5;i++)
	{
	   printf("%d",arr);
	}
	for(j=0;j<5;j++)
	{
	   printf("%d",arr1);
	}
	arr3[k]=arr[i]+arr[j];
	for(k=0;k<20;k++)
	{
	    printf("%d",arr3);
	}
	getch();

}