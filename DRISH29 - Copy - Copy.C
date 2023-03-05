#include<stdio.h>
#include<conio.h>
void main()
{
	int arr[20],flag,min,max,i,n,ch,m;
	clrscr();
	printf("enter n");
	scanf("%d",&n);
	printf("enter n numbers");
	for(i=0;i<n;i++)
	{
	    scanf("%d",&arr[i]);
	}
	printf("1:search \n 2:min \n 3:max");
	printf("enter your choice");
	scanf("%d",&ch);

	switch(ch)
	{
	     case 1:
			printf("what?");
			scanf("%d",m);
			flag=0;
			for(i=0;i<n;i++)
			{
			    if(m==arr[i])
			    {
			       flag=1;
			    }

			}
			if(flag==1)
			{
			    printf("mil gaya");
			}
			else
			{
			    printf("time nahi");
			}

			break;

	     case 2:
			min=arr[0];
			for(i=0;i<n;i++)
			{
			    if(arr[i]<min)
			    {
			       min=arr[i];
			    }
			}
			printf("min is %d",arr[i]);

			break;


	     case 3:
			max=arr[0];
			for(i=0;i<n;i++)
			{
			  if(arr[i]>max)
			  {
			     max=arr[i];
			  }
			  printf("max is %d",arr[i]);
			}

			break;

	     default:
			printf("ghar ja");
	}

	getch();
}