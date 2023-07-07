// Given two strings s and t, return true if they are equal when both are typed into empty text editors. '#' means a backspace character.

// Note that after backspacing an empty text, the text will continue empty.

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
            if (x == '#')
            {
                if (!a.empty())
                    a.pop();
            }
            else
                a.push(x);
        }
        for (char x : t)
        {
            if (x == '#')
            {
                if (!b.empty())
                    b.pop();
            }
            else
                b.push(x);
        }

        if (a == b)
            return true;
        else
            return false;
    }
};

int main()
{
    Solution s;
    s.backspaceCompare("am#s", "as$s");

    return 0;
}