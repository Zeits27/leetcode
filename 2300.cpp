#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    vector<int> successfulPairs(vector<int> &spells, vector<int> &potions, long long success)
    {
        sort(potions.begin(), potions.end());
        int n = potions.size();
        vector<int> result;

        for (int i = 0; i < spells.size(); i++)
        {
            long long req = (success + spells[i] - 1) / spells[i];
            int left = 0;
            int right = n - 1;
            int ans = n;

            while (left <= right)
            {
                int mid = left + (right - left) / 2;

                if (potions[mid] >= req)
                {
                    ans = mid;
                    right = mid - 1;
                }
                else
                {
                    left = mid + 1;
                }
            }
            result.push_back(n - ans);
        }

        return result;
    }
};
