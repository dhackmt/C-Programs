#include<stdio.h>
#include<conio.h>
void main()
{
     int arrb[10],arro[10],arrh[10],m,k,n,num,i,ans=0,temp,num1,num2;
     clrscr();
     printf("enter number");
     scanf("%d",&num);
     k=0;
     while(num!=0)
     {
	  ans=num%2;
	  arrb[k]=ans;
	  k++;
	  num=num/2;
     }

     printf("binary ans is:");
     for(i=k-1;i>=0;i--)
     {
	printf("%d ",arrb[i]);
     }

     printf("\nenter number");
     scanf("%d",&num1);
     m=0;
     ans=0;
     while(num1!=0)
     {
	  ans=num1%8;
	  arro[m]=ans;
	  m++;
	  num1=num1/8;
     }

     printf("octal ans is:");
     for(i=m-1;i>=0;i--)
     {
	printf("%d ",arro[i]);
     }

     printf("\nenter number");
     scanf("%d",&num2);
     n=0;
     ans=0;
     while(num2!=0)
     {
	  ans=num2%16;
	  arrh[n]=ans;
	  n++;
	  num2=num2/16;
     }

     printf("hexadecimal ans is:");
     for(i=n-1;i>=0;i--)
     {
      /*	if(arrh[i]==10)
		printf("A");
	else if(arrh[i]==11)
	 */    //	printf("B");
       //	else if(arrh[i]==12)
	     //	printf("C");
       //	else if(arrh[i]==13)
	       //	printf("D");
      //	else if(arrh[i]==14)
	 //	printf("E");
     //	else if(arrh[i]==15)
       //		printf("F");
   //	else
		printf("%d",arrh[i]);

     }




     getch();
}