#include <stdio.h>
#include <string.h>

// Function to find the first occurrence of needle in haystack
class Solution
{
public:
    int numWaterBottles(int numBottles, int numExchange)
    {
        int ans = numBottles;
        while (numBottles - numExchange >= 0)
        {
            numBottles = numBottles - numExchange;
            ans++;
            numBottles++;
            numExchange++;
        }

        return ans;
    }
};

int main()
{

    int numBottles = 10;
    int numExchange = 3;
    printf("Result: %d\n", Solution().numWaterBottles(numBottles, numExchange)); // expect 15
    return 0;
}
