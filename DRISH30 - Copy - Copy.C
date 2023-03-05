#include<stdio.h>
#include<conio.h>
void main()
{
	int temp,i,j,n,arr[20],ch;
	clrscr();
	printf("enter n");
	scanf("%d",&n);
	printf("numbers");
	for(i=0;i<n;i++)
	{
	   scanf("%d",&arr[i]);
	}
	printf("array before sorting is:");
	for(i=0;i<n;i++)
	{
	   printf("%d\t",arr[i]);
	}
	printf("1:a \n 2:d");
	printf("choice");
	scanf("%d",&ch);


	switch(ch)
	{
	     case 1:
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
			 printf("after");
			 for(i=0;i<n;i++)
			{
			 printf("%d",arr[i]);
			}
			break;


	   case 2:

			for(i=0;i<n;i++)
			{
			 for(j=i+1;j<n;j++)
			 {
			    if(arr[i]<arr[j])
			    {
			      temp=arr[i];
			       arr[i]=arr[j];
			       arr[j]=temp;
			    }
			 }
		       }
			 printf("after");
			 for(i=0;i<n;i++)
			{
			 printf("%d",arr[i]);
			}




	}
	getch();
}