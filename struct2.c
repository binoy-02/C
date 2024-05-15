/*Declare a structure for Books having author_name and book_name.
 Create an array of books using a pointer variable. Provide functions for reading n books 
 and displaying the same using pointers.*/

 #include<stdio.h>
#include<stdlib.h>
struct book
{
	char book_name[20];
	char author_name[20];
};
void read(struct book *b1,int n)
{
	int i;
	printf("Enter the details of %d books",n);
	for(i=0;i<n;i++)
	{
		printf("\nEnter book name:");
		scanf("%s",&(b1+i)->book_name);
		
		printf("Enter author_name:");
		scanf("%s",&(b1+i)->author_name);
		
	}
}
void display(struct book *b1,int n)
{
	int i;
	printf("\n****Boook details****\n");
	for(i=0;i<n;i++)
	{
		printf("Book name:%s\n",(b1+i)->book_name);
		printf("Book author name:%s\n",(b1+i)->author_name);
	}

}
int main()
{
	struct book *b1;
	int n;

	printf("Enter number of books:");
	scanf("%d",&n);
	b1 = (struct book *)calloc(n, sizeof(struct book));
	read(b1,n);
	display(b1,n);
	free(b1);
	return 0;
}

