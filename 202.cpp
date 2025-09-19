#include <iostream>
#include <set>
using namespace std;

class Solution
{
public:
    bool isHappy(int n)
    {
        set<int> done;
        while (n != 1 && done.find(n) == done.end())
        {
            done.insert(n);
            int sum = 0;
            while (n > 0)
            {
                int digit = n % 10;
                sum += digit * digit;
                n /= 10;
            }
            n = sum;
        }
        return n == 1;
    }
};

int main()
{
    Solution sol;
    int n = 19;
    if (sol.isHappy(n))
        cout << "True" << endl;
    else
        cout << n << "False" << endl;

    return 0;
}
