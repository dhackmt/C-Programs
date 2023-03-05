#include<stdio.h>
#include<conio.h>
void main()
{
	char str1[20],str2[20],str3[20],i,x=0;
	clrscr();
	printf("enter string 1");
	gets(str1);
	printf("enter 2");
	gets(str2);
	for(i=0;str1[i]!='\0';i++)
	{
	     str3[x++]=str1[i];

	}
	for(i=0;str2[i]!='\0';i++)
	{
	      str3[x++]=str2[i];

	}
	str3[x]='\0';
	printf("string 3 is %s",str3);
	getch();
}