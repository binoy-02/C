#include <stdlib.h>
#include<stdio.h>
int main()
{
	int i,j,r,c,count=0;
	printf("enter the no of rows and columns :");
	scanf("%d%d",&r,&c);
	int *a[r];
	for(i=0;i<r;i++)
	{
		a[i]=(int *)malloc(c*sizeof (int));
	}
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
			a[i][j]=++count;
		}
	}
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
			printf("%d\t",a[i][j]);
		}
		printf("\n");
	}
	return 0;
}
