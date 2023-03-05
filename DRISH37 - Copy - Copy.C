#include<stdio.h>
#include<conio.h>
void main()
{
	int arr[5],i,cnt=0,n,j,flag;
	clrscr();
	printf("enter 5 numbers");
	for(i=0;i<5;i++)
	{
	   scanf("%d",&arr[i]);
	}
	printf("array is:\t");
	for(i=0;i<5;i++)
	{
	  printf("%d\t",arr[i]);
	}
	printf("prime no. are:\t");
	for(i=0;i<5;i++)
	{
	    n=arr[i];
	    flag=0;
	    for(j=2;j<=n/2;j++)
	    {
		 if(n%j==0)
		 {
		    flag=1;
		    break;
		 }

	    }

	if(flag!=1)
	{
	   cnt++;
	}
     }
	printf("%d",cnt);
	getch();
}