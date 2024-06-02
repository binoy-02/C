#include<stdio.h>

int reverse(int num)
{
    int n=num,r=0,sum=0;
    while(n!=0)
    {
        r=n%10;
        if(r%2==0){
            n=n/10;
        }
        else{
            sum=sum+r;
            n=n/10;
        }
        
    }
    return sum;
}


int main()
{   
    int num,result;
    scanf("%d",&num);
    result=reverse(num);
    printf("%d",result);
    return 0;
}

