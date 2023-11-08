#include <stdio.h>
int main()
{
    char it[5] = {'A', 'B', 'C', 'D', 'E'}, tc;
    int c = 14, profit, knap[5] = {0, 0, 0, 0, 0}, t, i, j, p[5], w[5] = {25, 10, 5, 28, 15}, v[5] = {100, 1000, 500, 560, 750};
    for (i = 0; i < 5; i++)
        printf("	%c ", it[i]);
    printf("\n");
    for (i = 0; i < 5; i++)
        printf("	%d ", w[i]);
    printf("\n");
    for (i = 0; i < 5; i++)
        printf("	%d ", v[i]);
    printf("\n");
    printf("\n Price of each item per weight \n");
    for (i = 0; i < 5; i++)
    {
        p[i] = v[i] / w[i];
        printf("	%d ", p[i]);
    }
    printf("\n");
    for (i = 0; i <= 3; i++)
    {
        for (j = i + 1; j <= 4; j++)
        {
            if (p[i] < p[j])
            {
                t = p[i];
                p[i] = p[j];
                p[j] = t;
                tc = it[i];
                it[i] = it[j];
                it[j] = tc;
                t = w[i];
                w[i] = w[j];
                w[j] = t;
                t = v[i];
                v[i] = v[j];
                v[j] = t;
            }
        }
    }
    printf("\n Sorted items as per the price \n");
    for (i = 0; i < 5; i++)
        printf("	%c ", it[i]);
    printf("\n");
    for (i = 0; i < 5; i++)
        printf("	%d ", w[i]);
    printf("\n");
    for (i = 0; i < 5; i++)
        printf("	%d ", v[i]);
    printf("\n");
    printf("\n Price of each item per weight \n");
    for (i = 0; i < 5; i++)
    {
        p[i] = v[i] / w[i];
        printf("	%d ", p[i]);
    }
    printf("\n Knapsack algo soltion \n");
    j = 0;
    while (c > 0)
    {
        if (w[j] < c)
        {
            knap[j] = w[j];
            c = c - knap[j];
        }
        else
        {
            knap[j] = c;
            c = c - knap[j];
        }
        j++;
    }
    printf("\n Items selected in knapsack \n");
    for (i = 0; i < 5; i++)
    {
        printf("	%c ", it[i]);
    }
    printf("\n");
    for (i = 0; i < 5; i++)
    {
        printf("	%d ", knap[i]);
    }
    printf("\nProfit in the knapsack is:\n");
    for (i = 0; i < 5; i++)
    {
        profit = profit + (knap[i] * p[i]);
    }
    printf("	%d ", profit);
    return 0;
}