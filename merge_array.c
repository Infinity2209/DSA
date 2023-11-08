#include <stdio.h>
int main()
{
    int a[100], b[100], c[100], n;
    int i,j,k,l;
    printf("enter the size of your arrays\n");
    scanf("%d", &n);
    printf("enter your first array\n");
    for ( i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }
    printf("enter your second array\n");
    for (j = 0; j < n; j++)
    {
        scanf("%d", &b[j]);
    }
    printf("your merg array is\n");
    for ( k = 0; k < n; k++)
    {
        if (k%2==0)
        {
            c[k] = a[k];
        }
        else
        {
            c[k] = b[k];
        }
    }
    for ( l = 0; l < n; l++)
    {
        printf("%d\n",c[l]);
    }
    return 0;
}