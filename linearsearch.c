#include <stdio.h>
int main()
{
    int a[5]={10,20,3,4,7},i,s;
    printf("enter your searching element\n");
    scanf("%d",&s);
    for ( i = 0; i < 5; i++)
    {
        if (a[i]==s)
        {
            break;
        }
        
    }
    if (i>=5)
    {
        printf("\nyour searching element is not found");
    }
    else if (a[i]==s)
    {
        printf("\nyour element is found at %d",i+1);
    }
    else
    {
        printf("you have choosen the wrong number");
    }
    
    
    return 0;
}