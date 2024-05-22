//Linked Queue
#include<stdio.h>
#include<stdlib.h>
struct node{
	int data;
	struct node *next;
};
struct node *front;
struct node *rear;




void enqueue(){
	struct node *ptr;
	int item;
	ptr=(struct node*)malloc(sizeof(struct node));
	
		printf("\n Enter a value : ");
		scanf("%d",&item);
		ptr->data=item;
		if(front==NULL){
			front=ptr;
			rear=ptr;
			rear->next=NULL;
		}
else
{
			rear->next=ptr;
			rear=ptr;
			rear->next=NULL;
		}
}

void dequeue()
{
	struct node *ptr;
	if(front==NULL)
{
		printf("\n Linked Q is empty");
		
	}
else
{
		ptr=front;
		front=front->next;
		free(ptr);
		printf("\n Element deleted");
	}
}

void display()
{
	struct node *ptr;
	ptr=front;
	
if(front==NULL)
{
		printf("\n EMPTY QUEUE");
	}
else
{
		printf("\n printing values\n");
		while(ptr!=NULL)
{
			printf(" %d\t",ptr->data);
			ptr=ptr->next;
		}
	}
}

void main()
{
	int choice;
	while(choice!=4)
{
	printf("\n1.INSERT  2.DELETE AN ELEMENT 3.DISPLAY THE QUEUE 4.EXIT ");
		printf("\n Enter your choice : ");
		scanf("%d",&choice);
		switch(choice)
{
			case 1:
				enqueue();
				break;
			case 2:
				dequeue();
				break;
			case 3:
				display();
				break;
			case 4:
				choice=4;
			default:
				printf("\n Enter a choice between 1 and 4");
				break;
		}
	}
}
