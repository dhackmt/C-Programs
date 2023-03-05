#include<stdio.h>
#include<conio.h>
struct book
{
   int bno;
   char bn[20];
   int p;
};
void main()
{
	int i,n,ch,max,p;
	struct book b[20];
	clrscr();
	printf("enter no. of books");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
	    printf("deatils of books are:\n",i+1);
	    printf("enter no,name,,price");
	    scanf("%d%s%d",&b[i].bno,&b[i].bn,&b[i].p);


	}
	printf("1.>500 \n 2.max");
	printf("enter your choice");
	scanf("%d",&ch);

	switch(ch)
	{
	      case 1:
			printf("details of books are:\n");
			printf("\nno\tname\tprice");
			for(i=0;i<n;i++)
			{
			   if(b[i].p>500)
			   {
			     printf("%d\t%s\t%d",b[i].bno,b[i].bn,b[i].p);
			   }
			}

			break;

	      case 2:
			printf("details of book are:\n");
			printf("\nno\tname\tprice");
			max=b[0].p;
			p=0;
			for(i=0;i<n;i++)
			{
			  if(b[i].p>max)
			  {
			      max=b[i].p;
			      p=i;
			  }
			}
			printf("book with max price is \n");
			     printf("%d\t%s\t%d",b[i].bno,b[i].bn,b[i].p);

	 default:
			printf("invalid");

	}
	getch();
}