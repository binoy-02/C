//Reverse a name using a linked stack. 
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int ch;
struct stack{
	char data;
	struct stack *next;
};
struct stack *top=NULL;
void push(char e){
	
	struct stack *t;
	t=(struct stack*)malloc(sizeof(struct stack));
	
	t->data=e;
	t->next=top;
	top=t;
}

void pop(){
	if(top==NULL){
		printf("\n Stack is empty ");
	}else{
		printf("\n%c\t",top->data);
		top=top->next;
	}
}

void main(){
	char a='\n',c;
	printf("\n Enter your name :");
	scanf("%c",&c);
	while(c!=a)
	{
		push(c);
		scanf("%c",&c);
	}
	push('\0');
	while(top!=NULL)
	{
		pop();
	}
}
