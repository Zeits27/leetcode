#include <stdio.h>

// Function to calculate number of ways to climb n stairs
int climbStairs(int n)
{
    long long a = 0, b = 1, c = 0;
    for (int i = 1; i <= n; i++)
    {
        c = a + b;
        a = b;
        b = c;
    }
    return (int)c; // safe cast since result fits in int for LeetCode constraints
}

int main()
{
    int n = 5;
    int result = climbStairs(n);

    printf("Number of ways to climb %d stairs: %d\n", n, result);
    return 0;
}
