//Demonstrate the sparse representation for a given matrix

#include<stdio.h>
void main()
{
	int a[10][10];
	int r,c,i,j;
	printf("enter your row size\n");
	scanf("%d",&r);
    printf("enter the column size\n");
    scanf("%d",&c);
    printf("enter th sparese matrix\n");
    for(i=0;i<r;i++)
    {
	for(j=0;j<c;j++)
	{
		scanf("%d",&a[i][j]);
		
		}
    }
    printf("your matrix is :\n");
    for(i=0;i<r;i++)
    {
	for(j=0;j<c;j++)
	{
		printf("%d\t",a[i][j]);
		}
		printf("\n");
	}
	int s=0;
    int b[10][3];
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
			
if(a[i][j]!=0)
			{
			 b[s][0]=i;
			 b[s][1]=j;
			 b[s][2]=a[i][j];
			 s++;	
			}
		}
	}
	printf("the sparse matrix representation is: \n");
	for(i=0;i<s;i++)
	{
		for(j=0;j<3;j++)
		{
			printf("%d\t",b[i][j]);
		}
		printf("\n");
	}

}

