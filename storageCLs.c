#include<stdio.h>
int glob=12;//global variable

void function()
{
	static int counter=0;//static variable
	counter++;
	printf("%d\n",counter);
}

void main()
{
	function();
	function();
	function();

	int a=5;//local variable
	register int b=20;
	printf("sum is :%d\n",a+glob);
	printf("address of local variable a is:%x\n",&a);
	//printf("address of register variable b is:%d\n",&b);
	printf("value inside the register variable is:%d",b);
}

