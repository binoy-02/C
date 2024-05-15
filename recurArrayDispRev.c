#include<stdio.h>
void print(int arr[],int n){
	if(n!=0){		
		printf("\n %d",arr[n]);
		print(arr,(n-1));
	}
	else{
		printf("\n %d",arr[0]);
	}
}
int get(int arr[]){
	int s,i;
	printf("\nEnter the size of the array :");
	scanf("%d",&s);
	for(i=0;i<s;i++){
		printf("\n enter the %d value : ",(i+1));
		scanf("%d",&arr[i]);
	}
	return s;
}
void main(){
	int arr[100],size;
	size=get(arr);
	printf("\n ********************PRINTING ARRAY********************");
	print(arr,(size-1));
}
