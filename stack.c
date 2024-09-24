#include <stdio.h>
void push();
void pop();
void disp();
int stack[5],top=-1;
int main()
{
    int c;
    int e=1;
    while (e)
    {
        printf("select 1 for push, 2 for pop, 3 for display, 4 for exit\n");
        scanf("%d",&c);
        switch (c)
        {
        case 1:push();
            continue;
        case 2:pop();
            continue;
        case 3:disp();
            continue;
        case 4: e=0;
        continue;
        default:
            printf("please enter the value in between 1 to 4");
        }
    }
    return 0;
}
void push(){
    if (top==4)
    {
        printf("overflow\n");
    }
    else
    {
        printf("enter the value to push into the stack\n");
        top++;
        scanf("%d",&stack[top]);
        printf("%d is sucessfully pushed\n",stack[top]);
    }   
    
}
void pop(){
    if (top==-1)
    {
        printf("underflow\n");
    }
    else
    {
        stack[top]=0;
        top--;
        printf("element is deleted sucessfully\n");
    }
}
void disp(){
    int i;
    printf("The current content of the stack\n");
    for (i=top; i>= 0;i--)
    {
        printf("%d\n",stack[i]);
    }
    
}