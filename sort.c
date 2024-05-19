/*Implement various sorting Algorithms
a.	Bubble Sort
b.	Selection Sort
c.	Insertion Sort
*/

#include<stdio.h>
int read(int a[]);
void display(int a[],int n);
void bubblesort(int a[],int n);
void selection(int a[],int n);
void insert(int a[],int n);
int read(int a[]){
	int n,i;
	printf("\nEnter the no of elements:");
	scanf("%d",&n);
	for(i=0;i<n;i++){
		printf("\n Enter the %d element: ",(i+1));
		scanf("%d",&a[i]);
	}
	return n;
}
void display(int a[],int n){
	int i;
	for(i=0;i<n;i++){
		printf("%d\t",a[i]);
		
	}
	printf("\n");
}
void bubblesort(int a[],int n){
	int i,j,t;
	for(i=0;i<n;i++){
		for(j=0;j<n-1;j++){
			if(a[j]>a[j+1]){
				t=a[j];
				a[j]=a[j+1];
				a[j+1]=t;
				
			}
		}
	}
}

void selection(int a[],int n){
	int i,j,t;
	for(i=0;i<n;i++){
		for(j=i+1;j<n;j++){
			
if(a[i]>a[j]){
				t=a[i];
				a[i]=a[j];
				a[j]=t;
			}
		}
	}
}

void insert(int a[],int n){
	int i,j,e,t;
	for(i=1;i<n;i++){
		e=a[i];
		j=i-1;
		while(j>=0 && a[j]>e){
			a[j+1]=a[j];
			j--;
		}
		a[j+1]=e;
	}
}
void main(){
	int a[10],n,s;
	n=read(a);
	printf("\n Before sorted : ");
	display(a,n);
	printf("\n After bubble sort :");
	bubblesort(a,n);
	display(a,n);
	selection(a,n);
	printf("\n After Slecetion sort : ");
	display(a,n);
	insert(a,n);
	printf("\n After Insertion sort : ");
	display(a,n);
	
}
