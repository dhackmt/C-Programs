#include<stdio.h>
#include<conio.h>
#include<string.h>
void main()
{
	int ch,i;
	char str1[20],str2[20],cnta=0,cnte=0,cnti=0,cnto=0,cntu=0,temp[20];
	clrscr();
	printf("enter string");
	scanf("%s",&str1);
	printf("enter string 2");
	scanf("%s",&str2);
	printf("\n1.change case \n2.reverse \n3.pallindrome \n4.count");
	printf("enter your choice");
	scanf("%d",&ch);
	switch(ch)
	{
		case 1:
			for(i=0;i<strlen(str1);i++)
			{
			   if(isalpha(str1[i]))
			   {
			      if(isupper(str1[i]))
			      {
				 str1[i]=tolower(str1[i]);
			      }
			      else
			      {
				 str1[i]=toupper(str1[i]);
			      }

			   }
			}
			printf("string after change %s",str1);
			break;

		case 2:
			strrev(str2);
			printf("reversed string is %s",str2);
			break;

		case 3:
			strcpy(temp,str1);
			strrev(str1);
			if(strcmp(str1,temp)==0)
			{
			   printf("%s is pallindrome",str1);
			}
			else
			{
			   printf("%s is not a pallindrome",str1);
			}
			break;

		case 4:
			for(i=0;i<strlen(str1);i++)
			if(str1[i]=='a')
			{
			   cnta++;
			}
			else if(str1[i]=='e')
			{
			   cnte++;
			}
			else if(str1[i]=='i')
			{
			   cnti++;
			}
			else if(str1[i]=='o')
			{
			   cnto++;
			}
			else if(str1[i]=='u')
			{
			    cntu++;
			}
			printf("\ntotal a vowels is %s is %d",str1,cnta);
			printf("\ntotal e vowels is %s is %d",str1,cnte);
			printf("\ntotal i vowels is %s is %d",str1,cnti);
			printf("\ntotal o vowels is %s is %d",str1,cnto);
			printf("\ntotal u vowels is %s is %d",str1,cntu);
			break;

		default:
			printf("ghar ja");

	}

   getch();

}