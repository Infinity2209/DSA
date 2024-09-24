#include <stdio.h>
void enqueue();
void recursion();
void dequeue();
void disp();
int q[5], f = -1, r = -1, e = 1;
int main()
{
    recursion();
    return 0;
}
void recursion()
{
    int ch;
    printf("select\n1:enqueue\n2:dequeue\n3:display\n4:Exit\n");
    scanf("%d", &ch);
    switch (ch)
    {
    case 1:
        enqueue();
        break;
    case 2:
        dequeue();
        break;
    case 3:
        disp();
        break;
    case 4:
        e=0;
        break;
    default:
        printf("Please select from 1 to 4\n");
    }
    if (e==1)
    {
        recursion();
    }
    
}
void enqueue()
{
    if (r == -1 && f == -1)
    {
        r++;
        printf("Enter value to the queue\n");
        scanf("%d", &q[r]);
        f++;
    }
    else if (r < 4)
    {
        r++;
        printf("Enter value to the queue\n");
        scanf("%d", &q[r]);
    }
    else
    {
        printf("Overflow\n");
    }
}
void disp()
{
    int i;
    if (f == -1 || r == -1)
    {
        printf("No element exits\n");
    }
    else
    {
        for (i = f; i <= r; i++)
        {
            printf("%d\n", q[i]);
        }
    }
}
void dequeue()
{
    if (f == -1)
    {
        printf("Underflow\n");
    }
    else if (f <= r)
    {
        q[f] = 0;
        f++;
        printf("Element Deleted\n");
    }
    else
    {
        printf("No element to delete\n");
        f = -1;
        r = -1;
    }
}