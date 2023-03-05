#include<stdio.h>
#include<conio.h>
void main()
{
	int arr[5],i,cntp=0,cntn=0,cntz=0;
	clrscr();
	printf("enter 5 numbers");
	for(i=0;i<5;i++)
	{
		scanf("%d",&arr[i]);
	}
	printf("array is :\n");
	for(i=0;i<5;i++)
	{
		printf("%d",arr[i]);
	}
	for(i=0;i<5;i++)
	{
	   if(arr[i]==0)
	   {
	      cntz++;
	   }
	   else if(arr[i]>=0)
	   {
	       cntp++;
	   }
	   else if(arr[i]<=0)
	   {
	       cntn++;
	   }
	}
	printf("total p is %d and n %d n 0 %d",cntp,cntn,cntz);
	getch();
}