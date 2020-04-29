#include<stdio.h>
int f=-1,r=-1;
int size,input;
printf("please enter the size of queue");
scanf("%d",&size);
int queue[size];
void main()
{
    printf("enter what operation u want to do(1-inserting,2-deleting,3-display");
    switch(operation)
    {
        case 1:
        enqueue();
        break;
        
        case 2:
        dequeue();
        break;
        
        case 3:
        display();
        break;
    }
}

void enqueue()
{
    printf("enter the element");
    scanf("%d",&input);
    if(r>=size-1)
    {
        printf("queue is full");
    }
    else if(f==-1&&r==-1)
    {
        f=0;r=0;
        queue[r]=input;
    }
    else
    {
        r=r+1;
        queue[r]=input;
    }
}

void dequeue()
{
    if(f==-1)
    {
        printf("no elements in queue");
    }
    else if (f!==r)
    {
        printf("%d",queue[f]);
        for(i=f+1;i<=r;i++)
        {
            queue[i-1]=queue[i];
        }
        r=r-1;
    }
    else
    {
        printf("%d",queue[f]);
        f=-1;r=-1;
    }
}
void display()
{
    if(f==-1)
    {
        printf("empty")
    }
    else
    {
        for(i=f;i<=r;i++)
        {
            printf("%d",queue[i]);
        }
    }
}
    
    
