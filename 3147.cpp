class Solution
{
public:
    int maximumEnergy(vector<int> &energy, int k)
    {
        vector<int> dp(energy.size());
        int ans = INT_MIN;
        for (int i = energy.size() - 1; i >= 0; i--)
        {
            if (i + k < energy.size())
                dp[i] = energy[i] + dp[i + k];
            else
                dp[i] = energy[i];
            ans = max(ans, dp[i]);
        }
        return ans;
    }
};