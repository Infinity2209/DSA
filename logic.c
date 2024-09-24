#include <stdio.h>
int main()
{
    int i, j, n;
    scanf("%d", &n);
    for (i = 1; i <= n; i++)
    {
        int count = 1;
        for (j = 0; j < i; j++)
        {
            if (j % 2 == 0)
            {
                printf("%d", count++);
            }
            else
            {
                printf(" * ");
            }
        }
        printf("\n");
    }

    return 0;
}