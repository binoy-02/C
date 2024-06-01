#include<stdio.h>

int checkPrime(int num)
{
    int temp;
   for(int i=1;i<=num;i++){
      if(num%i==0)
       temp=temp+1;
   }
   if(temp==2){
       return 1;
   }
   else{
       return 0;
   }
    
}


void main()
{   
    int num;
    int result;
    scanf("%d",&num);
    result=checkPrime(num);
    printf("%d",result);
}

