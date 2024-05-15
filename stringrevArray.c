#include <stdio.h>
#include<string.h>
int main()
{
	char str[25],temp;
	int i,len=0,size;
	printf("Enter a string: "); 
	scanf("%s",str);
	len=strlen(str);
	size=len-1;
	for(i=0;i<=size/2;i++)
	{
		temp=str[i];
		str[i]=str[len-1]; 
		str[len-1]=temp; 
		len--;
	}
	printf("\nReverse of the given string: %s",str); 
	return 0;
}