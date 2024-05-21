//Linked Stack 

#include<stdio.h>
#include<stdlib.h>
int ch;
struct stack{
	int data;
	struct stack *next;
};
struct stack *top=NULL;
void push(){
	int e;
	struct stack *t;
	t=(struct stack*)malloc(sizeof(struct stack));
	printf("\n enter the element : ");
	scanf("%d",&e);
	t->data=e;
	t->next=top;
	top=t;
}
void peak(){
	printf("\n %d",top->data);
}
void pop(){
	if(top==NULL){
		printf("\n Stack is empty ");
	}else{
		printf("\n popped %d\t",top->data);
		top=top->next;
	}
}

void main(){
	while(ch!=4){
	
	printf("\n 1:PUSH\n 2 : POP \n 3: PEAK \n 4: EXIT \n ENTER YOUR CHOICE :");
	scanf("%d",&ch);
	switch(ch){
		
	case 1:
		push();
		break;
	case 2:
		pop();
		break;
	


case 3:
		peak();
		break;
	
	case 4:
		ch=4;
		break;
	}
	}
}
