//Demonstrate Circular Linked List

#include<stdio.h>
#include<malloc.h>
struct node{
	int data;
	struct node *next;
};
struct node *head=NULL;

void insert(int e){
	struct node *t;
	if(head==NULL){
		head=(struct node*)malloc(sizeof(struct node));
		head->data=e;
		head->next=head;
	}else{
		t=head;
		while(t->next!=head){
			t=t->next;
		}
		t->next=(struct node*)malloc(sizeof(struct node));
		t->next->data=e;
		t->next->next=head;
	}
}
void disp(){
    struct node *t;
	if(head==NULL){
		printf("\n Circular linked list is empty\n ");
	}else{
	    printf("\n *************the list is : ***************\n ");
	    t=head;
		do{
			printf("\t %d ",t->data);
			t=t->next;
		}while(t!=head);
	}
}
void del(int e){
struct node *t;
if(head==NULL){
    printf("\n list is empty ");
}else if(head->data==e && head->next==head){
    head==NULL;
}else if(head->data==e){
    t=head;
    while(t->next !=head){
        t=t->next;
    }
    t->next=head->next;
    head=head->next;
}else{
    t=head;
    while(t->next !=head && t->next->data !=e){
        t=t->next;
    }
    if(t->next==head){
        printf("\n element not found");
    }else{
        t->next=t->next->next;
    }
}
}
void main(){
   int ch=1,num;
   while(ch!=4){
    printf("\n");
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
