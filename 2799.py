class Solution(object):
    def countCompleteSubarrays(self, nums):
        Myset = set(nums)              # unique elements in nums
        size = len(Myset)              # total distinct numbers
        count = 0
        inside = set()

        for start in range(len(nums)):
            for end in range(start, len(nums)):
                inside.add(nums[end])
                if len(inside) == size:
                    count += 1
            inside.clear()
        return count


# Example usage
if __name__ == "__main__":
    sol = Solution()
    nums = [1, 3, 1, 2, 2]
    print("Count of complete subarrays:", sol.countCompleteSubarrays(nums))
