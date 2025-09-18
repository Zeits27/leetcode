#include <stdio.h>
#include <stdbool.h>

bool isPalindrome(int x)
{
    if (x < 0)
        return false; // negative numbers are not palindromes

    int origin = x;
    long long reverse = 0;

    while (x > 0)
    {
        reverse = reverse * 10 + x % 10;
        x = x / 10;
    }

    return origin == reverse;
}

int main()
{
    int num1 = 121;
    int num2 = -121;
    int num3 = 10;

    printf("%d -> %s\n", num1, isPalindrome(num1) ? "true" : "false"); // true
    printf("%d -> %s\n", num2, isPalindrome(num2) ? "true" : "false"); // false
    printf("%d -> %s\n", num3, isPalindrome(num3) ? "true" : "false"); // false

    return 0;
}
