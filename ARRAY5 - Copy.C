#include<stdio.h>
#include<conio.h>
void main()
{
     int arr1[10],arr2[10],i,j,m,n,arr3[10],x,flag;
     clrscr();
     printf("enter size");
     scanf("%d%d",&m,&n);
     printf("enter %d elements for array1",m);
     for(i=0;i<m;i++)
    {
     scanf("%d",&arr1[i]);
    }

    printf("enter %d elements for array2",n);
    for(i=0;i<n;i++)
    {
     scanf("%d",&arr2[i]);
    }


     for(i=0;i<m;i++)
     {
	 printf("%d",arr1[i]);
     }

  for(i=0;i<n;i++)
     {
       printf("%d",arr2[i]);
     }

  x=0;
   for(i=0;i<n;i++)
   {
     arr3[x++]=arr1[i];
   }
     for(i=0;i<n;i++)
     {
     flag=0;
	for(j=0;j<m;j++)
	{

	   if(arr2[i]==arr1[j])
	   {
	      flag=1;
	      break;
	   }
	}
	if(flag==0)
	{
	   arr3[x++]=arr2[i];
	}
     }
     printf("\nunion is:\t");
     for(i=0;i<x;i++)
     {
	 printf("%d\t",arr3[i]);
     }


     getch();
}