#include <stdio.h>
#include <stdlib.h>

int *sumZero(int n, int *returnSize)
{
    int *ans = (int *)malloc(n * sizeof(int));
    *returnSize = n;

    int half = n / 2;
    if (n == 1)
    {
        ans[0] = 0;
        return ans;
    }
    if (n % 2 == 0)
    {
        for (int i = 0; i < half; i++)
        {
            int num = i + 1; // use i+1 instead of n-i for correct pairs
            ans[i] = -num;
            ans[i + half] = num;
        }
    }
    else
    {
        for (int i = 0; i < half; i++)
        {
            int num = i + 1;
            ans[i] = -num;
            ans[i + half + 1] = num;
        }
        ans[half] = 0;
    }
    return ans;
}

int main()
{
    int n = 5;
    int returnSize;
    int *result = sumZero(n, &returnSize);

    printf("Array of %d integers summing to zero:\n", returnSize);
    for (int i = 0; i < returnSize; i++)
    {
        printf("%d ", result[i]);
    }
    printf("\n");

    free(result); // free allocated memory
    return 0;
}
