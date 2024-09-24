#include <stdio.h>
int main()
{
    int x[]={10,1,5,2,19,15,3};
    int size=7,temp;
    int i,j,k;
    for ( i = 0; i < size; i++)
    {
        for ( j = 0; j < size; j++)
        {
            if (x[j]>x[j+1])
            {
                temp=x[j+1];
                x[j+1]=x[j];
                x[j]=temp;
            }
            
        }
        
    }
    for ( k = 0; k < size; k++)
    {
        printf("%d\t",x[k]);
    }
    
    return 0;
}