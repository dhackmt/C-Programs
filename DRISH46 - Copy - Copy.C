#include<stdio.h>
#include<conio.h>
int isprime(int);
void main()
{
     int i;
     clrscr();
     for(i=1;i<=10;i++)
     {
      if(isprime(i))
	 {
		printf("number is prime %d",i);
	 }
	 else
	 {
		printf("%d is not prime",i);
	 }
     }
     getch();
}
int isprime(int m)
{
      int i,flag=0;
      for(i=2;i<=m/2;i++)
      {
	       if(m%i==0)
	       {
		  flag=1;
		  break;
	       }
      }
	       if(flag==1)
	       {
		  return 0;
	       }
	       else
	       {
		  return 1;
	       }


}