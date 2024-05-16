//Implement stack operations using array.
#include<stdio.h>
#define N 5
int stack[N];
int top=-1;
void push(int e)
{
	if(top+1==N)
	{
		printf("Stack is full");
	}
	else
	{
		top=top+1;
		stack[top]=e;
		printf("Element is pushed\n");
	}
}
void pop()
{
	if(top==-1)
	{
		printf("Stack is empty");
	}
	else
	{
		printf("\npopped %d",stack[top]);
		top=top-1;
	}
}
void peak()
{
	if(top==-1)
	{
		printf("stack is empty");	
	}
	else
	{
		printf("Top Element is %d\n",stack[top]);
	}
}
void main()
{
	int ch,e;
	while(ch!=4)
	{
		printf("\n1.push\n2.pop\n3.peak\n4.exit\nEnter you choice:");
		scanf("%d",&ch);
		switch(ch)
		{
			case 1:	printf("Enter the element:\n");
					scanf("%d",&e);
					push(e);
					break;
			case 2:	pop();
					break;
			case 3:	peak();
					break;
			case 4:	break;
			default:printf("wrong choice");
		}		
	}
}