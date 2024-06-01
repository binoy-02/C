#include<stdio.h>

int fun(int num)
{
    int l=0,r;
    while(num!=0){
        r=num%10;
        if(r>l){
            l=r;
        }
        num=num/10;
    }
    return l;
}


int main()
{   
    int num,result;
    scanf("%d",&num);
    result=fun(num);
    printf("%d",result);
    return 0;
}