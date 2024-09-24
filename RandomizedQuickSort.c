#include <stdio.h>
#include <stdlib.h>
void swap(int *a, int *b)
{
    int temp;
    temp = *a;
    *a = *b;
    *b = temp;
}
int partion(int arr[], int p, int r)
{
    int pivotIndex = p + rand() % (r - p + 1); // generates a random number as a pivot
    int pivot;
    int i = p - 1;
    int j;
    pivot = arr[pivotIndex];
    swap(&arr[pivotIndex], &arr[r]);
    for (j = p; j < r; j++)
    {
        if (arr[j] < pivot)
        {
            i++;
            swap(&arr[i], &arr[j]);
        }
    }
    swap(&arr[i + 1], &arr[r]);
    return i + 1;
}

void quick_sort(int arr[], int p, int q)
{
    int j;
    if (p < q)
    {
        j = partion(arr, p, q);
        quick_sort(arr, p, j - 1);
        quick_sort(arr, j + 1, q);
    }
}
int main()
{
    int i,n;
    int arr[100];
    printf("Enter the number of element\n");
    scanf("%d",&n);
    printf("Enter your Array\n");
    for ( i = 0; i < n; i++)
    {
        scanf("%d",&arr[i]);
    }
    quick_sort(arr, 0, n - 1); // function to sort the elements of array
    printf("Sorted array is:\n");
    for (i = 0; i < n; i++)
        printf("%d \n", arr[i]);
    return 0;
}