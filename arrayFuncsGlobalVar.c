#include<stdio.h>
int a[100],p,n=-1;
void disp()
{
	int i=0;
	for(i=0;i<n;i++)
	{
		printf("%d\t",a[i]);
	}
	
}
void insert()
{
	int i;
	printf("enter the limit:");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		printf("value at a[%d]:",i);
		scanf("%d",&a[i]);
	}
}
void search()
{
	int i,s, flag=0;
	printf(" element to search is:");
	scanf("%d",&s);
	for (i=0;i<n;i++)
	{
		
		if(a[i]==s)
		{
			flag=1;
			printf("%d is at position %d",s,i+1);
		}
	}
	if(flag=0)
	{
		printf("element not found");
	}
}
void del(int p)
{
	int i,j;
	
	for (i=0;i<n;i++)
	{
		if(a[i]==p)
		{
			for(j=i;j<n;j++)
			{
				a[j]=a[j+1];
			}
			--n;
		}
	}
	disp();
}

void sort()
{
	int i,j,temp;
	for(i=0;i<n;i++)
	{
		for(j=i+1;j<n;j++)
		{
			if (a[i]>a[j])
			{
				temp=a[i];
				a[i]=a[j];
				a[j]=temp;
			}
		}
	}
	disp();
}
int menu()
{
	int ch;
	printf("\n 1.Insert\n 2.Search\n 3.Delete\n 4.Sort\n 5.Display\n 6.Exit\n");
	printf("enter your choice :");
	scanf("%d",&ch);
	return ch;
}
int main()
{
	int i,s,p,ch;
	for(ch=menu();ch!=6;ch=menu())
	{
		switch(ch)
		{
			case 1:
			insert();
			break;
			
			case 2:
			search();
			break;
			
			case 3:
			printf (" enter the element to delete");
			scanf("%d",&p);
			del(p);
			break;
			
			case 4:
			sort();
			break;
			
			case 5:
			disp();
			break;
			
			default:
			printf("wrong choice");
			
		}
	}
	return 0;
}
