#include<stdio.h>
#include<conio.h>
void main()
{
	char x;
	clrscr();
	printf("enter a character");
	scanf("%c",&x);
	if(isalpha(x))
	{
	    printf("%c is alphabet",x);
	 }
	    if(x=='a'||x== 'e'|| x=='i' ||x== 'o'||x== 'u'||x== 'A' ||x== 'E' ||x== 'I' ||x== 'O' ||x== 'U')
	    {
	       printf("\n%c is a vowel",x);
	    }
	    else
	    {
	       printf("\n%c is a consonant",x);
	    }

getch();
}