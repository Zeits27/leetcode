class Solution
{
public:
    int numWaterBottles(int numBottles, int numExchange)
    {
        int ans = numBottles;
        int rest = 0;
        while (numBottles / numExchange != 0)
        {
            rest = numBottles % numExchange;
            numBottles = (numBottles / numExchange);
            ans += numBottles;
            numBottles += rest;
        }

        return ans;
    }
};