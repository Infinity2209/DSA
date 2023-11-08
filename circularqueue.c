#include <stdio.h>
void ciren();
void cirdeq();
void cirdis();
int cirQ[5] = {0},f=0,r=0;

int main()
{
    int ch, e = 1;
    while (e==1)
    {
        printf("Select\t1:Circular Enqueue\n\t2:Circular Dequeue\n\t3:Display\n\t4:Exit\n");
        scanf("%d", &ch);
        switch (ch)
        {
        case 1:
            ciren();
            continue;
        case 2:
            cirdeq();
            continue;
        case 3:
            cirdis();
            continue;
        case 4:
            e = 0;
            break;
        default:
            printf("Please select in between 1 to 4\n");
            break;
        }
    }
    return 0;
}
void ciren()
{
    if (r <= 4)
    {
        if (cirQ[r] == 0)
        {
            printf("Enter the value\n");
            scanf("%d", &cirQ[r]);
            printf("Enqueued sucessfully\n");
            r++;
        }
        else
        {
            printf("Overflow\n");
        }
    }
    else
    {
        r = 0;
        if (cirQ[r] == 0)
        {
            printf("Enter the value\n");
            scanf("%d", &cirQ[r]);
            printf("Enqueued sucessfully\n");
            r++;
        }
        else
        {
            printf("Overflow\n");
        }
    }
}
void cirdeq()
{
    if (f <= 4)
    {
        if (cirQ[f] != 0)
        {
            cirQ[f] = 0;
            printf("Deleted....\n");
            f++;
        }
        else
        {
            printf("Underflow\n");
        }
    }
    else
    {
        f = 0;
        if (cirQ[f] != 0)
        {
            cirQ[f] = 0;
            printf("Deleted....\n");
            f++;
        }
        else
        {
            printf("Underflow\n");
        }
    }
}
void cirdis()
{
    int i;
    for (i = 0; i < 5; i++)
    {
        printf("%d\n", cirQ[i]);
    }
}