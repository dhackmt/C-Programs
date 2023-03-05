#include<stdio.h>
#include<conio.h>
void main()
{
	int i,j,arr[5],temp;
	clrscr();
	printf("enter 5 ");
	for(i=0;i<5;i++)
	{
		scanf("%d",&arr[i]);
	}
		printf("array before sorting is:/t");
		for(i=0;i<5;i++)
	 {
		printf("%d\t",arr[i]);
	 }
	 for(i=0;i<5;i++)
	 {
	  for(j=i+1;j<5;j++)
	  {
	      if(arr[i]>arr[j])
	      {
		  temp=arr[i];
		  arr[i]=arr[j];
		  arr[j]=temp;
	      }
	  }
	}
	printf("after:\t");
	for(i=0;i<5;i++)
	{
	   printf("%d\t",arr[i]);
	}
	getch();
}