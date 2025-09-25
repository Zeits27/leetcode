class Solution
{
public:
    int maxProfit(vector<int> &prices)
    {
        int profit = 0;
        int minprices = prices[0];
        for (int i = 0; i < prices.size(); i++)
        {
            if (minprices > prices[i])
            {
                minprices = prices[i];
            }
            else
            {
                profit = max(profit, prices[i] - minprices);
            }
        }
        return profit;
    }
};