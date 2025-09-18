#include <stdio.h>

int searchInsert(int *nums, int numsSize, int target)
{
    for (int i = 0; i < numsSize; i++)
    {
        if (nums[i] == target)
        {
            return i;
        }
        if (nums[i] > target)
        {
            return i;
        }
    }
    return numsSize;
}

int main()
{
    int nums[] = {1, 3, 5, 6};
    int numsSize = sizeof(nums) / sizeof(nums[0]);

    int target1 = 5;
    int target2 = 2;
    int target3 = 7;
    int target4 = 0;

    printf("Target %d -> index %d\n", target1, searchInsert(nums, numsSize, target1)); // 2
    printf("Target %d -> index %d\n", target2, searchInsert(nums, numsSize, target2)); // 1
    printf("Target %d -> index %d\n", target3, searchInsert(nums, numsSize, target3)); // 4
    printf("Target %d -> index %d\n", target4, searchInsert(nums, numsSize, target4)); // 0

    return 0;
}
