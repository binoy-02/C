//Implement a) malloc , b) calloc and c) free functions

#include<stdio.h>
#include<stdlib.h>
int main()
{
	int *p,n,i,*a;
	printf("MALLOC\n");
	printf("**********\n");
	 printf("enter the size:\n");
	scanf("%d",&n);
	p=(int *)malloc(sizeof (int)*n);
	printf("memory allocated\n");
	printf("Enter the elements:\n");
	for(i=0;i<n;i++)
	{
		printf("Enter p[%d]:",i);
		scanf("%d",p+i);
	}
	printf("The numbers entered are:");
	for(i=0;i<n;i++)
	{
		printf("%d\t",*(p+i));
	}
	free(p);
	printf("\nCALLOC\n");
	printf("**********\n");
   printf("enter the size:\n");
   scanf("%d",&n);
   a = (int*)calloc(n, sizeof(int));
   printf("memory allocated\n");
   printf("Enter the numbers:\n");
   for( i=0 ;i<n; i++ ) 
    {
	printf("Enter p[%d]:",i);
	scanf("%d",&a[i]);
	}

   printf("The numbers entered are:");
   for( i=0;i<n ;i++ ) 
   {
    printf("%d ",a[i]);
   }
   free(a);
   return(0);
}
