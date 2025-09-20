class Solution:
    def pivotIndex(self, nums):
        """
        :type nums: List[int]
        :rtype: int
        """
        total = sum(nums)
        sum_left = 0
        for i, n in enumerate(nums):
            if sum_left == (total - sum_left - n):
                return i
            sum_left += n
        return -1


# contoh penggunaan lokal (buat cek di IDE/terminal)
if __name__ == "__main__":
    sol = Solution()
    print(sol.pivotIndex([1,7,3,6,5,6]))  # Output: 3
    print(sol.pivotIndex([1,2,3]))        # Output: -1
    print(sol.pivotIndex([2,1,-1]))       # Output: 0
