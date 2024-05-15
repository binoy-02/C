#include<stdio.h>
int main(){
    int size;
    printf("Enter pyramid size");
    scanf("%d",&size);
    printf("Drawing Triangle\n");
    
    for(int i=0;i<size;i++){
        for(int j=0;j<=i;j++){
            printf("*");
        }
        printf("\n");
    }
    return 0;
}