#include <algorithm> // for reverse
#include <string>
using namespace std;

class Solution
{
public:
    int lengthOfLastWord(string s)
    {
        reverse(s.begin(), s.end());

        int i = 0;
        int n = s.size();

        while (i < n && s[i] == ' ')
        {
            i++;
        }

        int length = 0;
        while (i < n && s[i] != ' ')
        {
            length++;
            i++;
        }

        return length;
    }
};
