#include <stdio.h>
#include <string.h>

// Function to find the first occurrence of needle in haystack
int strStr(char *haystack, char *needle)
{
    int h = strlen(haystack);
    int n = strlen(needle);
    int result = 0;

    if (n == 0)
        return 0; // edge case: empty needle
    if (h < n)
        return -1;

    for (int i = 0; i <= h - n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (haystack[i + j] == needle[j])
            {
                result++;
            }
            else
            {
                break;
            }
        }
        if (result == n)
        {
            return i; // found match
        }
        else
        {
            result = 0; // reset counter
        }
    }
    return -1; // not found
}

int main()
{
    char haystack1[] = "hello";
    char needle1[] = "ll";
    printf("Result: %d\n", strStr(haystack1, needle1)); // expect 2

    char haystack2[] = "aaaaa";
    char needle2[] = "bba";
    printf("Result: %d\n", strStr(haystack2, needle2)); // expect -1

    char haystack3[] = "leetcode";
    char needle3[] = "";
    printf("Result: %d\n", strStr(haystack3, needle3)); // expect 0

    return 0;
}
