#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    bool backspaceCompare(string s, string t)
    {
        stack<char> a, b;

        for (char x : s)
        {
            a.push(x);
            if (a.top() == '#')
            {
                a.pop();
                if (!a.empty())
                    a.pop();
            }
        }
        for (char x : t)
        {
            b.push(x);
            if (b.top() == '#')
            {
                b.pop();
                if (!b.empty())
                    b.pop();
            }
        }
        bool flag = true;
        if (a.size() != b.size())
            return false;
        else
        {

            while (!a.empty() && !b.empty())
            {
                if (a.top() != b.top())
                {
                    flag = false;
                    break;
                }
                else
                {
                    a.pop();
                    b.pop();
                }
            }
        }

        return flag;
    }
};

int main()
{
    Solution s;
    s.backspaceCompare("am#s", "as$s");

    return 0;
}