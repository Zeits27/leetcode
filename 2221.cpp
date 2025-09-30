class Solution
{
public:
    int triangularSum(vector<int> &nums)
    {
        // long long int len = nums.size();
        // long long int ans =1;
        // long long int res = 1* nums[0];
        //     for(int i=1; i<len;i++){
        //         ans = (ans * (len-i)/i);
        //         res = (res + (ans % 10) * nums[i]) % 10;

        //     }

        // return res;
        int n = nums.size();
        while (n > 1)
        {
            for (int i = 0; i < n - 1; i++)
            {
                nums[i] = (nums[i] + nums[i + 1]) % 10;
            }
            n--;
        }
        return nums[0];
    }
};