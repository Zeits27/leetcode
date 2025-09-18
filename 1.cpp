#include <stdio.h>
#include <stdlib.h>

int *twoSum(int *nums, int numsSize, int target, int *returnSize)
{
    *returnSize = 2;
    int *array = (int *)malloc(*returnSize * sizeof(int));
    if (!array)
    {
        perror("malloc failed");
        exit(1);
    }

    for (int i = 0; i < numsSize; i++)
    {
        for (int j = i + 1; j < numsSize; j++)
        {
            if (nums[i] + nums[j] == target)
            {
                array[0] = i;
                array[1] = j;
                return array;
            }
        }
    }

    // No solution found
    *returnSize = 0;
    free(array); // avoid memory leak
    return NULL;
}

int main()
{
    int nums[] = {2, 7, 11, 15};
    int target = 9;
    int returnSize;

    int *result = twoSum(nums, sizeof(nums) / sizeof(nums[0]), target, &returnSize);

    if (result != NULL)
    {
        printf("Indices: [%d, %d]\n", result[0], result[1]);
        free(result); // free memory after use
    }
    else
    {
        printf("No solution found.\n");
    }

    return 0;
}
