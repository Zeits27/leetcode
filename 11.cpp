class Solution
{
public:
    int maxArea(vector<int> &height)
    {
        int sizee = height.size() - 1;
        int max = 0;
        int left = 0;
        int right = sizee;
        while (left != right)
        {
            if (max < sizee * min(height[left], height[right]))
            {
                max = sizee * min(height[left], height[right]);
            }
            if (height[left] < height[right])
            {
                left++;
            }
            else
            {
                right--;
            }
            sizee--;
        }
        return max;
    }
};