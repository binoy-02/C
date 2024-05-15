//Read n Strings and display them in the ascending order

#include<stdio.h>
#include<string.h>
char str[100][100];
int len;
void insert(){
	int i;
	printf("\n enter the no of strings to read : ");
	scanf("%d",&len);
	for(i=0;i<len;i++){
		printf("\n enter the %d string : ",(i+1));
		scanf("%s",str[i]);
	}
}
void sort(){
	int i,j;
	char temp[100];
	for(i=0;i<len;i++){
		for(j=i+1;j<len;j++){
			if(strcmp(str[i],str[j])>0)
			{
				strcpy(temp,str[i]);
			strcpy(str[i],str[j]);
			strcpy(str[j],temp);
			}
		}
	}
}
void print(){
	int i;
	for(i=0;i<len;i++)
{
		printf("\n %d : %s",(i+1),str[i]);
	}
}
void main(){
	insert();
	sort();
	print();
}
