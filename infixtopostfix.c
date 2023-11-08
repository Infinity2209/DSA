#include <stdio.h>
char stack[20];
int top=-1;
void push(char c){
    stack[++top]=c;
}
int priority(char o){
    if (o=='(')
    {
        return 0;
    }
    if (o=='+'|| o=='-')
    {
        return 1;
    }
    if (o=='*'|| o=='/')
    {
        return 2;
    }
    return 0;
}
char pop(){
    if (top==-1)
    {
        return -1;
    }
    else
    {
        return stack[top--];
    }
    
    
}
int main()
{
    char exp[20],*p,x;
    printf("Enter your infix expression\n");
    scanf("%s",exp);
    printf("Your entered expression is : %s\n",exp);
    p=exp;
    printf("Postfix expression is : ");
    while (*p!='\0')
    {
        if(isalnum(*p))
        {
            printf("%c",*p);
        }
        else if (*p=='(')
        {
            push(*p);
        }
        else if(*p==')'){
            while ((x=pop())!='(')
            {
                printf("%c",x);
            }
        }
        else{
            while (priority(stack[top])>=priority(*p))
            {
                printf("%c",pop());
            }
            push(*p);
        }
        p++;
    }
    while(top != -1)
    {
        printf("%c ",pop());
    }
    return 0;
}