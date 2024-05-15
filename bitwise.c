#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
//Complete the following function.


void calculate_the_maximum(int n, int k) {
    int andmax=0,ormax=0,xormax=0;
    for (int i = 1; i <=n; i++)
    {
        for (int  j = i+1; j <= n; j++)
        {
            int andnum=i&j;
           int ornum = i|j;
           int xornum=i^j;
           if (ornum <k && ornum>ormax)
           {
            ormax=ornum;
           }
           if (andnum <k && andnum>andmax)
           {
            andmax=andnum;
           }
           if (xornum <k && xornum>xormax)
           {
            xormax=xornum;
           }
        }
        
    }
    printf("%d ",andmax);
    printf("\n%d",ormax);
    printf("\n%d",xormax);
    
}

int main() {
    int n, k;
    
    scanf("%d %d", &n, &k);
    calculate_the_maximum(n, k);
 
    return 0;
}
