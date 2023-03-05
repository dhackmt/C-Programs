#include<stdio.h>
#include<conio.h>
void main()
{
	int arr1[10],arr2[10],arr3[20],i,m,n,k,j,flag;
	clrscr();
	printf("enter size of 1st array");
	scanf("%d",&m);
	printf("enter %d elements for array 1",m);
	for(i=0;i<m;i++)
	{
	   scanf("%d",&arr1[i]);
	}

	printf("enter size of 2nd array");
	scanf("%d",&n);
	printf("enter %d elements for array 2",n);
	for(i=0;i<n;i++)
	{
	   scanf("%d",&arr2[i]);
	}
	k=0;
	for(i=0;i<m;i++)
	{
		flag=1;
		for(j=0;j<n;j++)
		{
		      if(arr1[i]==arr2[j])
		      {
			  flag=0;
			  break;
		      }
		}
		if(flag==0)
		{
			arr3[k]=arr1[i];
			k++;
		}
	}


	printf("\narray 1 is :");
	for(i=0;i<m;i++)
	{
	   printf("%d ",arr1[i]);
	}
	printf("\narray 2 is :");
	for(i=0;i<n;i++)
	{
	   printf("%d ",arr2[i]);
	}
	printf("\nIntersection is :");
	for(i=0;i<k;i++)
	{
	   printf("%d ",arr3[i]);
	}

    getch();
}