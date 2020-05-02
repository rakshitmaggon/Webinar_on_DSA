#include<stdio.h>
int main()
{
    int f=-1,r=-1;
    int num,size,input,j,i;
    printf("Enter the size of the queue");
    scanf("%d",&size);
    int queue[size];
    do
    {
        printf("Enter your prefrence(1-Enqueue,2-Dequeue,3-Display):");
        scanf("%d",&num);
        switch(num)
        {
        case 1:
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
          break;

        case 2:
        if(f==-1)
        {
        printf("no elements in queue");
        }
        else if (f!=r)
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
        printf("The front most element is :%d",queue[f]);
        f=-1;r=-1;
        }
        break;


     case 3:
     if(f==-1)
    {
        printf("empty");
    }
    else
    {
        for(i=f;i<=r;i++)
        {
            printf("%d",queue[i]);
        }
    }
    break;

        }

        printf("\nDo you want to repeat the process??(1-yes,0-no):");
        scanf("%d",&j);
    } while(j==1);
    return 0;

}

