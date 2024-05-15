//Use malloc to read n integers and find the mean.

#include<stdio.h>
#include<stdlib.h>
int main()
{
	int *p,n,i,s=0;
	float mean=0;
	printf("Number of elements to be entered:");
	scanf("%d",&n);
	p=(int *)malloc(sizeof(int)*n);
	printf("Enter %d numbers:\n",n);
	for(i=0;i<n;i++)
	{
		printf("Enter p[%d]:",i);
		scanf("%d",p+i);
	}
	for(i=0;i<n;i++)
	{
		s=s+*(p+i);
	}
	mean=s/n;
	printf("mean:%f",mean);
	free(p);
}
