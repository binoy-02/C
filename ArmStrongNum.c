#include<stdio.h>
#include<math.h>
#define MAX 100

int function(int num)
{
    int n=num,n1=num;
    int count=0,sum=0,r,p;
   while(n!=0){
       count=count+1;
       n=n/10;
   }

   while(n1!=0)
   {
       r=n1%10;
       p=pow(r,count);
       sum=sum+p;
       n1=n1/10;
   }
   if(sum==num){
       return 1;
   }
   else
    {
        return 0;
    }
}


void main()
{   
    int num;
    scanf("%d",&num);
    int out=function(num);
    printf("%d",out);
}


