//STACK -POP , PUSH , DISPLAY 
#include<stdio.h>
int main()
{
    int num,i,size,var1,top=-1,repeat,j;
    printf("enter the size of your stack:");
    scanf("%d",&size);
    int stack[size];
    do
    {
        printf("Enter your prefrence(1-push,2-pop,3-display):");
        scanf("%d",&num);
        switch(num)
        {
            case 1:
            if(top>size-1)
            {
                printf("sorry stack is full");
            }
            else
            {
                for(i=top;i<size-1;i++)
                {
                    int var1;
                    printf("enter the value:");
                    scanf("%d",&var1);
                    top++;
                    stack[top]=var1;
                }    
            }
            break;
        
            case 2:
            if(top==-1)
            {
                printf("sorry stack is empty ");
            }
            else
            {
                printf("The top most element of stack is %d",stack[top]);
                top--;
            }
            break;
        
            case 3:
            if(top==!-1)
            {
                printf("stack values are going to be displayed");
                for(i=top;i>=0;i--)
                {
                    printf("%d",stack[i]);
                }
            }
        }    
        printf("do you want to repeat the process??(1-yes,0-no):");
        scanf("%d",&j);
    } while(j==1);
    
    return 0;
}


