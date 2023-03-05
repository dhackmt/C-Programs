#include<stdio.h>
int main()
{
	float a,b,c;
	printf("enetr 3 numbers");
	scanf("%f%f%f",&a,&b,&c);
	if(a>b && a>c)
	{
	    printf("%f is largest",a);
	}
	else if(b>c)
	{
	   printf("%f is largest",b);
	}
	else
	{
	   printf("%f is largest",c);
	}


return 0;
}