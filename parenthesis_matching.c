#include <stdio.h>

int main()
{
     char exp[100]; char stack[100];
    int top=-1; int i; char symbol;
    printf("please enter the expression");
    scanf("%s",exp);
    
    for(i=0;i<strlen(exp);i++)
    {
        if(exp[i]=='('||exp[i]=='{'||exp[i]=='[')
        {
            stack[top]=exp[i];
            top++;
        }
        
        else if(exp[i]==')'||exp[i]==']'||exp[i]=='}')
        {
            if(exp[i]==')' || stack[top]=='(')
            {
                top--;
            }
            
            else if(exp[i]=='}' || stack[top]=='{')
            {
                top--;
            }
            
            else if(exp[i]==']' || stack[top]=='[')
            {
                top--;
            }
        }
    }
    
    if(top==-1)
    {
        printf("Stack is empty\n");
        printf("Hence paranthesis has matched");
        
    }
    else
    {
        printf("paranthesis unmatched\n");
    }

    printf("\n Top will be : %d",top);
    return 0;
}    
