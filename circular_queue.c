#include<stdio.h>
int main()
{
    int f=-1,r=-1;
    int num=0,size=0,input=0,j=0,i=0;
    printf("Enter the size of the queue:");
    scanf("%d",&size);
    int queue[size];
    do
    {
        printf("Enter your preference(1-Enqueue,2-Dequeue,3-Display):");
        scanf("%d",&num);
        switch(num)
        {
        case 1:
             printf("Enter the element");
             scanf("%d",&input);
             if(f==r+1 ||r==size-1)
             {
                printf("queue is full");
             }
             else if(f==-1&&r==-1)
             {
               f=0;r=0;
               queue[r]=input;
             }
             else if(r==size-1)
             {
                 r=0;
                 queue[r]=input;
             }
             else
            {
               r=r+1;
              queue[r]=input;
            }
          break;

        case 2:
        if(f==-1 && r==-1)
        {
        printf("No elements in queue");
        }
        else if (f==r)
        {
            printf("\nThe front most element is :%d",queue[f]);
            f=r=-1;
        }
       
        else if(f==size-1)
        {
            printf("\nThe front most element is :%d",queue[f]);
            f=0;
       
        }
        
        else{
            printf("\nThe front most element is :%d",queue[f]);
            f++;
            
        }
        break;
     
     
     case 3:
     if(f==-1)
    {
        printf("No elements in Queue");
    }
    else
    {
        
        for(i=f;i<=r;i++)
        {
            printf("\nThe elements are :%d",queue[i]);
        }
        
       
    }
    break;
     
        }

        printf("\nDo you want to repeat the process??(1-yes,0-no):");
        scanf("%d",&j);
    } while(j==1);
    return 0;

}

