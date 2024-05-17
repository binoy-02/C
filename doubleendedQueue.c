//Demonstrate double-ended queue.

#include <stdio.h>
#define size 5  
# define max 100
int deque[size];    
int f = -1, r = -1;       
void enqueuefront(int x)    
{    
    if((f==0 && r==size-1) || (f==r+1))    
    {    
        printf("Overflow");    
    }    
    else if((f==-1) && (r==-1))    
    {    
        f=r=0;    
        deque[f]=x;    
    }    
    else if(f==0)    
    {    
        f=size-1;    
        deque[f]=x;    
    }    
    else    
    {    
        f=f-1;    
        deque[f]=x;    
    }    
}       
void enqueuerear(int x)    
{    
    if((f==0 && r==size-1) || (f==r+1))    
    {    
        printf("Overflow");    
    }    
    else if((f==-1) && (r==-1))    
    {    
        r=0;    
        deque[r]=x;    
    }    
    else if(r==size-1)    
    {    
        r=0;    
        deque[r]=x;    
    }    
    else    
    


{    
        r++;    
        deque[r]=x;    
    }       
}    
void display()    
{    
    int i=f;   

    printf("\nElements in a double ended queue are: ");       
    while(i!=r)    
    {    
        printf("%d ",deque[i]);    
        i=(i+1)%size;    
    }    
     printf("%d",deque[r]);    
}      
void dispfront()    
{    
    if((f==-1) && (r==-1))    
    {    
        printf("Deque is empty");    
    }    
    else    
    {    
        printf("\nThe value of the element at front is: %d", deque[f]);    
    }          
}    
void disprear()    
{    
    if((f==-1) && (r==-1))    
    {    
        printf("Deque is empty");    
    }    
    else    
    {    
        printf("\nThe value of the element at rear is %d", deque[r]);    
    }        
}        
void dequeuefront()    
{    
    if((f==-1) && (r==-1))    
    {    
        printf("double ended queue is empty");    
    }    
    else if(f==r)    
    {    
        printf("\nThe deleted element is %d", deque[f]);    
        f=-1;    
        r=-1;           
    }    
     else if(f==(size-1))    
     {    
         printf("\nThe deleted element is %d", deque[f]);    
         
f=0;    
     }    
     else    
     {    
          printf("\nThe deleted element is %d", deque[f]);    
          f=f+1;    
     }    
}    
void dequeuerear()    
{    
    if((f==-1) && (r==-1))    
    {    
        printf("double ended queue is empty");    
    }    
    else if(f==r)    
    {    
        printf("\nThe deleted element is %d", deque[r]);    
        f=-1;    
        r=-1;         
    }    
     else if(r==0)    
     {    
         printf("\nThe deleted element is %d", deque[r]);    
         r=size-1;    
     }    
     else    
     {    
          printf("\nThe deleted element is %d", deque[r]);    
          r=r-1;    
     }    
}    
int main()    
{      
  int c,a[max];
  int x;
  while(1)
  {
	printf("\n1.enqueue rear\n2.enqueue front\n3.dequeue rear\n4.dequeue front\n ENTER YOUR CHOICE\n");
	scanf("%d",&c);
    switch(c)
    {
     case 1:
	printf("enter the number to enqueue\n");
	scanf("%d",&x);
	enqueuerear(x);
	break;
     case 2:
	printf("enter the number to enqueue\n");
	scanf("%d",&x);
	enqueuefront(x);
	break;
    case 3:
	dequeuerear();
	
break;
    case 4:
	dequeuefront();
	break;
    case 5:
	break;
    }
}
}
