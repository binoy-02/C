#include<stdio.h>
void occ(int arr[],int n, int a)
{
	int b=0,i;
	printf("%d is at position :\n",a);
	for(i=0;i<n;i++)
	{
		if(arr[i]==a)
		{
			printf("%d\n",i);
			b++;
		}
	}
	if (b==0)
	{
		printf("none");
	}
}
int main( )
{
	int n,a,i,arr[10];
	printf("enter the size of array :");
	scanf("%d",&n);
	printf("enter the elements :\n");
	for (i=0;i<n;i++)
	{	
			scanf("%d",&arr[i]);	
	}
	printf("enter the element to find it's occurence :");
	scanf("%d",&a);
	occ(arr,n,a);
	return 0;
}
