class Solution(object):
    def canBeTypedWords(self, text, brokenLetters):
        broken = set(brokenLetters)   # store broken letters in a set for O(1) lookup
        count = 0
        for word in text.split():     # split sentence into words
            if all(ch not in broken for ch in word):
                count += 1
        return count


# Example usage
if __name__ == "__main__":
    sol = Solution()
    text = "hello world"
    brokenLetters = "ad"
    print(sol.canBeTypedWords(text, brokenLetters))  # Output: 1 (only "world" can be typed)

    text2 = "leet code"
    brokenLetters2 = "lt"
    print(sol.canBeTypedWords(text2, brokenLetters2))  # Output: 1 (only "code")

    text3 = "leet code"
    brokenLetters3 = "e"
    print(sol.canBeTypedWords(text3, brokenLetters3))  # Output: 0 (no word can be typed)
