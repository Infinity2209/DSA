#include <stdio.h>
#include <stdlib.h>

struct Node
{
    int data;
    struct Node *next;
}*h, *f, *r;
void insertE()
{
    if (f == NULL)
    {
        struct Node *mem = (struct Node *)malloc(sizeof(struct Node ));
        printf("Enter data\n");
        fflush(stdin);
        scanf("%d", &mem->data);
        mem->next = NULL;
        f = mem;
        r = mem;
        h = mem;
    }
    else
    {
        struct Node *mem = (struct Node *)malloc(sizeof(struct Node *));
        printf("Enter data\n");
        scanf("%d", &mem->data);
        mem->next = NULL;
        r->next = mem;
        r = mem;
    }
}
void insertS()
{
    struct Node *mem = (struct Node *)malloc(sizeof(struct Node));
    printf("Enter data\n");
    fflush(stdin);
    scanf("%d", &mem->data);
    mem->next = h;
    h = mem;
    f = mem;
}
void insertA()
{
    int index;
    printf("Enter the node after which you want to enter\n");
    fflush(stdin);
    scanf("%d", &index);
    struct Node *mem = (struct Node *)malloc(sizeof(struct Node));
    struct Node *q = h;
    int i = 0;
    while (i != index - 1)
    {
        q = q->next;
        i++;
    }
    printf("Enter data\n");
    scanf("%d", &mem->data);
    mem->next = q->next;
    q->next = mem;
}
void display()
{
    struct Node *i;
    i=h;
    while (i->next!= NULL)
    {
        printf("%d\n", i->data);
        i = i->next;
    }
    
}
void search()
{
    int s, p = 0;
    printf("Enter your searching element\n");
    fflush(stdin);
    scanf("%d", &s);
    struct Node *g = f;
    while (g->next != NULL)
    {
        p++;
        if (g->data == s)
        {
            printf("Haa! the element is found at %d\n", p);
            break;
        }
        g = g->next;
    }
    if (g->next == NULL)
    {
        printf("OOPS! your element not found\n");
        g = f;
    }
}
int main()
{
    int ch;
    char option = 'y';
    while (option == 'y' || option == 'Y')
    {
        printf("Select \t1:Insertion at the end\n\t2:Insertion at the start\n\t3:Insertion after a node\n\t4:Display\n\t5:Search an element\n\t6:Exit\n");
        scanf("%d", &ch);
        switch (ch)
        {
        case 1:
            insertE();
            break;
        case 2:
            insertS();
            break;
        case 3:
            insertA();
            break;
        case 4:
            display();
            break;
        case 5:
            search();
            break;
        case 6:
            option = 'o';
            break;
        default:
            printf("Plese select the correct option\n");
            break;
        }
    }
    printf("Enter y/Y to continue");
    fflush(stdin);
    scanf("%c", &option);
    return 0;
}