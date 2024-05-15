#include<stdio.h>

int recursive(int a[20],int n,int start)
{
	if(start<n)
	{
		printf("%d\t",a[start]);
		start=start+1;
		recursive(a,n,start);
	}
	return 0;
}
int main()
{
	int a[20],n,i;
	printf("enter the limit :");
	scanf("%d",&n);
	printf("enter the elements\n");
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	int start=0;
	printf("Display the elements in array using recursive function\n");
	recursive(a,n,start);
	return 0;
}

