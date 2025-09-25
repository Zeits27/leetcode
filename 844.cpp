class Solution
{
public:
    bool backspaceCompare(string s, string t)
    {
        int length = 0;
        if (s.size() > t.size())
        {
            length = s.size();
        }
        else
        {
            length = t.size();
        }
        reverse(s.begin(), s.end());
        reverse(t.begin(), t.end());
        int counts = 0;
        int countt = 0;
        int ignores = 0;
        int ignoret = 0;

        for (int i = 0; i < length; i++)
        {
            if (i < s.size())
            {
                if (s[i] == '#')
                {
                    ignores++;
                }
                else if (ignores == 0)
                {
                    s[counts] = s[i];
                    counts++;
                }
                else
                {
                    ignores--;
                }
            }
            if (i < t.size())
            {
                if (t[i] == '#')
                {
                    ignoret++;
                }
                else if (ignoret == 0)
                {
                    t[countt] = t[i];
                    countt++;
                }
                else
                {
                    ignoret--;
                }
            }
        }
        s.resize(counts);
        t.resize(countt);
        if (s == t)
        {
            return true;
        }

        return false;
    }
};