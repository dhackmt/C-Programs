#include<stdio.h>
#include<conio.h>
struct employee
{
    int eid;
    char name[20];
    int salary;

};
void main()
{
     int i,ch,n,sid;
     char srch[20];
     struct employee e[20];
     clrscr();
     printf("enter no. of employees");
     scanf("%d",&n);
     for(i=0;i<n;i++)
     {
	printf("enter id,name,salary");
	scanf("%d%s%d",&e[i].eid,&e[i].name,&e[i].salary);
     }
     do
     {
     printf("1.name \n  2.id \n 3.display all \n 4.exit");
     printf("enter your choice");
     scanf("%d",&ch);

     switch(ch)
     {
	    case 1:
		     printf("enter seacrh");
		     scanf("%s",&srch);
		     printf("details of employee are:\n");
		     for(i=0;i<n;i++)
		     {
			if(stricmp(e[i].name,srch)==0)
			{
			     printf("\n%d\t%s\t%d",e[i].eid,e[i].name,e[i].salary);

			}
		     }
		     break;


	    case 2:
			printf("enter seacrh");
			scanf("%d",&sid);
			printf("details of employee are:\n");
			for(i=0;i<n;i++)
			{
			     if(e[i].eid==sid)
			     {

			     printf("\n%d\n%s\n%d",e[i].eid,e[i].name,e[i].salary);

			     }
			}
			break;


	    case 3:
			printf("\ndetails of employee are:\n");
			for(i=0;i<n;i++)
			{
			   printf("\n%d\n%s\n%d",e[i].eid,e[i].name,e[i].salary);
			}
			break;

	    case 4:
			printf("exit");

	    default:
			printf("invalid");

     }
}while(ch!=4);
   getch();
}