#include<stdio.h>
#include<conio.h>
void add();
void main()
{
	clrscr();
	add();
	getch();

}
void add()
{
    int x,y,z;
    printf("enter 2 ");
    scanf("%d%d",&x,&y);
    z=x+y;
    printf("%d",z);
}