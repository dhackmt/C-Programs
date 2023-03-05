#include<stdio.h>
#include<conio.h>
#include<string.h>
void main()
{
	int ch,cnt=0,i;
	char str1[20],str2[20];
	clrscr();
	printf("enter string");
	scanf("%s",&str1);
       //	printf("enter string 2");
       //
	scanf("%s",&str2);
	printf("\n1.change \n2.count \n3.*,? \n4.words");
	printf("enter your choice");
	scanf("%d",&ch);
	switch(ch)
	{
	      case 1:
			strlwr(str1);
			printf("string in lower case is %s",str1);
			strupr(str2);
			printf("string in upper case is %s",str2);
			break;

	      case 2:
		       //	printf("enter string 3");
		       //	gets(str3);
			printf("\nenter character");
			ch=getch();
			putch(ch);
			for(i=0;i<strlen(str1);i++)
			{
			   if(str1[i]==ch)
			   {
			      cnt++;
			   }

			}
			printf("total no. of %c in %s is %d",ch,str1,cnt);
			break;

	      case 3:
			for(i=0;i<strlen(str1);i++)
			{
			  if(isspace(str1[i]))
			  {
			     str1[i]='*';
			  }
			  else if(isdigit(str1[i]))
			  {
			      str1[i]='?';
			  }
			}

			printf("string is %s",str1);
			break;

	      case 4:
			for(i=0;i<strlen(str1);i++)
			{
			    if(isspace(str1[i]))
			    {
			       cnt++;
			    }
			}
			printf("words is %d",cnt);
			break;

	      default:
			printf("invalid");

	}
	getch();

		}

