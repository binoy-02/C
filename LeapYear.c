#include<stdio.h>
#define MAX 100

int function(int year)
{
   if(year%100==0){
       if(year%400==0){
           return year;
       }
       else{
           return 0;
       }
   }
   else{
       if(year % 4 ==0)
       {
           return year;
       }
       else
       {
           return 0;
       }
   }
}



void main()
{   
    int y;
    scanf("%d",&y);
    int out=function(y);
    printf("%d",out);
}


