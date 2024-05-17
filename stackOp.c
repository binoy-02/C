/*A letter means push and an asterisk means pop in the  following sequence. 
Give the sequence of values returned by the pop operations when this sequence of operations 
is performed on an initially empty LIFO stack.
 E A S * Y * Q U E * * * S T * * * I O * N * * *
*/

#include<stdio.h>
#define N 30
char stack[N];
int top=-1;
int push(char e)
{
	top=top+1;
	stack[top]=e;
	return 0;
}
char pop()
{
	char ch;
	ch=stack[top];
	top=top-1;
	return ch;
}
int main()
{
	int i;
	char s;
	char str[N];
	printf("Enter the string : ");
	scanf("%s",str);
	while(str[i]!='\0')
	{
	
		if(str[i]=='*')
		

{
			printf("%c",pop());
		}
		else
		{
			push(str[i]);
		}
		i++;
	}
	return 0;
}
