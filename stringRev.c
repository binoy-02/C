#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main()
{
	int i,len=0;
	char string[20];
	printf("Enter the string : ");
	scanf("%s",&string);
	for(i=0;string[i]!='\0';i++)
	{
		len++;
	}
	printf("Reversed string : ");
	for(i=len-1;i>=0;i--)
	{
		printf("%c",string[i]);
	}
	return 0;
}
