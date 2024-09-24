#include <stdio.h>
void push(int);
void show();
int stack[10],top=-1;
int main()
{    
    int n,r,temp;
    printf("enter your decimal number\n");
    scanf("%d",&n);
    temp=n;
    while (n)
    {
        r=n%2;
        push(r);
        n=n/2;
    }
    printf("the binary of %d is\n",temp);
    show();
    return 0;
}
void push(int r)
{
    top++;
    stack[top]=r;
}
void show()
{
    int i;
    for ( i = top; i>=0; i--)
    {
        printf("%d",stack[i]);
    }
    
}