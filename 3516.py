class Solution(object):
    def findClosest(self, x, y, z):
        x = abs(z - x)
        y = abs(z - y)
        if x > y:
            return 2   # y is closer
        elif x < y:
            return 1   # x is closer
        else:
            return 0   # equal distance


# Example usage
if __name__ == "__main__":
    sol = Solution()
    print(sol.findClosest(5, 10, 7))  # expect 1 (5 is closer to 7)
    print(sol.findClosest(3, 8, 6))   # expect 2 (8 is closer to 6)
    print(sol.findClosest(4, 10, 7))  # expect 0 (both are equally close)
