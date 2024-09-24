#include <stdio.h>
#include <stdlib.h>
struct bst
{
    int data;
    struct bst *lc;
    struct bst *rc;
}*node=NULL;
struct bst *insert(struct bst *node, int v){
    if (node==NULL)
    {
        node=(struct bst *)malloc(sizeof(struct bst));
        node->data=v;
        node->lc=NULL;
        node->rc=NULL;
        printf("entered sucessfully\n");
    }
    else if (v<=node->data)
    {
        node->lc= insert(node->lc,v);
    }
    else
    {
        node->rc= insert(node->rc,v);
    }
    return node;
}
void intrav(struct bst *node){
    if(node!=NULL){
        intrav(node->lc);
        printf("%d\n",node->data);
        intrav(node->rc);
    }
}
int count=1;
void search(struct bst *node, int v){
    if (node==NULL)
    {
        printf("No Element exits\n");
    }
    else
    {
        count++;
        if (v==node->data)
        {
            printf("Element is found at %d\n",count);
        }
        else if(v<node->data)
        {
            search(node->lc,v);
        }
        else
        {
            search(node->rc,v);
        }
    }
}
struct bst *minValueNode(struct bst *node)
{
    struct bst *current= node;
    
}

struct bst *del(struct bst *node, int v){
    if (node==NULL)
    {
        return node;
    }
    else if(v<node->data){
        node->lc=del(node->lc,v);
    }
    else if (v>node->data)
    {
        node->rc=del(node->rc,v);
    }
    else
    {
        if (node->lc==NULL)
        {
            struct bst *temp=node->rc;
            free(node);
            printf("%d Is Deleteted Sucessfully\n",v);
            return temp;
        }
        else if (node->rc==NULL)
        {
            struct bst *temp=node->lc;
            free(node);
            printf("%d Is Deleteted Sucessfully",v);
            return temp;
        }
        else{
            struct bst *temp= minValueNode(node->rc);
            node->data=temp->data;
            node->rc=del(node->rc,temp->data);
        }
    }
}
int main()
{   
    int ch,v,e=1;
    while (e)
    {
        printf("Select\t1:Insert\n\t2:Traversal\n\t3:Search\n\t4:Delete\n\t5:Exit\n");
        scanf("%d",&ch);
        switch (ch)
        {
            case 1:
                printf("Enter your value\n");
                scanf("%d",&v);
                node=insert(node,v);
                break;
            case 2:
                intrav(node);
                break;
            case 3:
                printf("Enter your searching element\n");
                scanf("%d",&v);
                search(node,v);
                break;
            case 4:
                printf("Enter your element to delete\n");
                scanf("%d",&v);
                struct bst *temp=del(node,v);
                break;
            case 5:
                e=0;
                break;
            default:
                printf("Please select from the option\n");
                break;
        }
    }
    return 0;
}