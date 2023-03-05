#include<stdio.h>
#include<conio.h>
#include<string.h>
void main()
{
	int ch,cnt;
	char str1[20],str2[20],str3[20],str4[20];
	clrscr();
	printf("enter string");
	scanf("%s",&str1);
	printf("enter string 2");
	scanf("%s",&str2);
	printf("\n1.length \n2.copy \n3.compare \n4.concatinate");
	printf("enter your choice");
	scanf("%d",&ch);
	switch(ch)
	{
		case 1:
			cnt=strlen(str1);
			printf("%d is length of %s",cnt,str1);
			break;

		case 2:
			strcpy(str2,str1);
			printf("copied string is %s",str2);
			break;

		case 3:
			if(strcmp(str1,str2)==0)
			{
			    printf("both equal");
			}
			else if(strcmp(str1,str2)>0)
			{
			    printf("str1 is greater",str1);
			}
			else if(strcmp(str1,str2)<0)
			{
			     printf("str2 is greater",str2);
			}
			break;

		case 4:
			strcpy(str4,str1);
			strcat(str4," ");
			strcat(str4,str2);
			printf("concatinated string is %s",str4);
			break;

		default:
			printf("ghar ja");

	     }
	getch();
}