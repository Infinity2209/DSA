#include <stdio.h>
int binarysearch(int[], int, int, int);
int main()
{
    int a[] = {7, 10, 14, 20, 23, 40, 49, 50};
    int s, li = 0, hi = 9, k;
    printf("enter your searching element\n");
    scanf("%d", &s);
    k = binarysearch(a, s, li, hi);
    printf("your element is found at %d", k);
    return 0;
}
int binarysearch(int a[], int s, int l, int h)
{
    int m;
    if (l<=h)
    {
        m = (l + h) / 2;
        if (a[m] == s)
        {
            return (m+1);  
        }
        else if (a[m] < s)
        {
            l=m+1;
            binarysearch(a, s, l, h);
        }
        else if(a[m]>s)
        {
            h=m-1;
            binarysearch(a, s, l, h);
        }
        else
        {
            printf("your input is wrong");
        }
    }
    
}