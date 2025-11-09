#include <stdio.h>
int count = 0;

int towerOfHanoi(int n, char from_rod, char to_rod, char aux_rod)
{
    count++;
    if (n == 0)
    {
        return count;
    }
    towerOfHanoi(n - 1, from_rod, aux_rod, to_rod);
    printf("Move disk %d from rod %c to rod %c\n", n, from_rod, to_rod);
    towerOfHanoi(n - 1, aux_rod, to_rod, from_rod);
}

// Driver code
int main()
{
    int N = 6;

    // A, B and C are names of rods
    towerOfHanoi(N, 'A', 'C', 'B');
    printf("Total moves: %d\n", count);
    return 0;
}