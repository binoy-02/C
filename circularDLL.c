//Demonstrate Circular doubly linked list 

#include<stdio.h>
#include<malloc.h>
struct node{
	int data;
	struct node *next;
	struct node *prev;
};
struct node *head=NULL;

void insert(int e){
	struct node *t;
	if(head==NULL){
		head=(struct node*)malloc(sizeof(struct node));
		head->data=e;
		head->prev=head;
		head->next=head;

	}else{
		t=head;
		while(t->next!=head){
			t=t->next;
		}
		t->next=(struct node*)malloc(sizeof(struct node));
		t->next->data=e;
		t->next->next=head;
		t->next->prev=t;
		head->prev=t->next;
	}
}
void disp(){
    struct node *t;
	if(head==NULL){
		printf("\n Doubly linked list is empty\n ");
	}else{
	    printf("\nthe list is : \n ");
	    t=head;
		do{
            printf("\t %d",t->data);
            t=t->next;
		}while(t!=head);
	}
}
void del(int e){
struct node *t;
if(head==NULL){
  
  printf("\n circular doubly linked list is empty ");
}else if(head->data==e && head->next==head){
    head==NULL;
}else if(head->data==e){
    head->prev->next=head->next;
    head->next->prev=head->prev;
    head=head->next;
}else{
    t=head->next;
    while(t!=head && t->data !=e){
        t=t->next;
    }
    if(t==head){
        printf("\n element not found ");
    }else{
        t->prev->next=t->next;
        t->next->prev=t->prev;
    }
}
}

void main(){
   int ch=1,num;
   while(ch!=4){
       printf("\n 1: INSERTING  2: DELETING  3: DISPLAYING  4: EXITING");
	    printf("\n ENTER YOUR CHOICE :");
	    scanf("%d",&ch);
	    switch(ch){
		    case 1:
		        printf("\n enter the element to insert : ");
		        scanf("%d",&num);
		        insert(num);
		        break;
		     case 2:
		        printf("\n enter the element to delete : ");
		        scanf("%d",&num);
		        del(num);
		        break;
		     case 3:
		        disp();
		        break;
		     case 4:
		        ch=4;
		        break;
		
		     default:
		        printf("\n enter a number between 1 and 4");
		        break;
	    }
   }
}
