/*Define a structure for employees having eno,ename, esal and dno. Read  n employees information and provide function for the following
a.	Searching an employee by no
b.	Sorting the employee by
i.	Name
ii.	Salary
c.	Deleting an employee*/

#include<stdio.h>
#include<string.h>
struct employee
{ 
 int eno;
 char ename[25];
 float esal;
 int dno;
};
 int n,i;
 void main()
{
  printf("enter the number of employees:");
  scanf("%d",&n);
  struct employee e[n],temp;
  printf("enter the employee details:\n\n");
  for(i=0;i<n;i++)
  {
  printf("enter employee no:");
  scanf("%d",&e[i].eno);
  printf("enter employee name:");
  scanf("%s",&e[i].ename);
  printf("enter employee salary:");
  scanf("%f",&e[i].esal);
  printf("enter employee dno:");
  scanf("%d",&e[i].dno);
  }  
  for(i=0;i<n;i++)
  {
   printf("\nemployee no:%d",e[i].eno);
   printf("\nemployee name:%s",e[i].ename);
   printf("\nemployee salary:%f",e[i].esal);
   printf("\nemployee dno:%d\n",e[i].dno);
  } 
  int key,flag=0;
  printf("\nenter the employee no to be searched:");
  scanf("%d",&key);
  for(i=0;i<n;i++)
  {
    if(e[i].eno==key)
    {
     printf("\nemployee found:\n");
     printf("\nemployee no:%d",e[i].eno);
     printf("\nemployee name:%s",e[i].ename);
     printf("\nemployee salary:%f",e[i].esal);
     printf("\nemployee dno:%d",e[i].dno);
     flag=1;
      break;
    }
   }
   if(flag==0)
   printf("employee not found:\n");
   int j;
   printf("\n\nSorting data by name:\n");
   for(i=0;i<n;i++)
   {
    for(j=i+1;j<n;j++)
     {
      if(strcmp(e[i].ename,e[j].ename)>0)
       {
        temp=e[i];
        e[i]=e[j];
        e[j]=temp;
       }
     }
    } 
    for(i=0;i<n;i++)
    {
     printf("\nemployee no:%d",e[i].eno);
     printf("\nemployee name:%s",e[i].ename);
     printf("\nemployee salary:%f",e[i].esal);
     printf("\nemployee dno:%d\n",e[i].dno);
    }
    printf("\n\nSorting data by salary:\n");
    for(i=0;i<n;i++)
     {
     for(j=i+1;j<n;j++)
      {
      if(e[i].esal>e[j].esal)
       {
        temp=e[i];
        e[i]=e[j];
        e[j]=temp;
       }
      }    
     } 
	 for(i=0;i<n;i++)
     {
       printf("\nemployee no:%d",e[i].eno);
       printf("\nemployee name:%s",e[i].ename);
       printf("\nemployee salary:%f",e[i].esal);
       printf("\nemployee dno:%d\n",e[i].dno);
     }   
	 int del;
     printf("\n\nEnter the employee number to be deleted:");
     scanf("%d",&del);
     for(i=0;i<n;i++)
     {
     if(e[i].eno==del)
      {
       n=n-1;
       for(i=0;i<n;i++)
        e[i]=e[i+1];
      }
     }
   printf("\n\nData after deletion\n");
   for(i=0;i<n;i++)
   {
    printf("\nemployee no:%d",e[i].eno);
    printf("\nemployee name:%s",e[i].ename);
    printf("\nemployee salary:%f",e[i].esal);
    printf("\nemployee dno:%d\n",e[i].dno);
   }
}
