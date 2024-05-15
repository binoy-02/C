#include<stdio.h>
int main(){
    int size;
    printf("Enter pyramid size: ");
    scanf(" %d",&size);
    for (int i = 1; i <=size ; i++)
    {
        for (int j = 5; j>=i ; j--)
        {
            printf("*");
        }
        printf("\n");  
    }
    
}