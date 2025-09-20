class Solution(object):
    def smallerNumbersThanCurrent(self, nums):
        """
        :type nums: List[int]
        :rtype: List[int]
        """
        count = []

        for i in range(len(nums)):
            smaller = 0
            for j in range(len(nums)):
                if nums[j] < nums[i]:
                    smaller += 1
            count.append(smaller)
        return count



# contoh penggunaan lokal (buat cek di IDE/terminal)
if __name__ == "__main__":
    sol = Solution().smallerNumbersThanCurrent
    print(sol([8,1,2,2,3]))        # Output: -1
    print(sol([2,1,-1]))       # Output: 0
