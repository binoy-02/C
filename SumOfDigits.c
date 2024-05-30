#include<stdio.h>

int sumofdig(int num)
{
    int sum=0,rem;
    while(num !=0)
    {
        rem=num%10;
        sum=sum+rem;
        num=num/10;
    }
    return sum;
}


int main()
{   
    int num,result;
    scanf("%d",&num);
    result=sumofdig(num);
    printf("%d",result);
    return 0;
}