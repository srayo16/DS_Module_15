// Given a string s containing just the characters '(', ')', '{', '}', '[' and ']', determine if the input string is valid.

// An input string is valid if:

// Open brackets must be closed by the same type of brackets.
// Open brackets must be closed in the correct order.
// Every close bracket has a corresponding open bracket of the same type.

#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    bool isValid(string s)
    {
        cout << "enter1" << endl;
        stack<char> st;

        for (char c : s)
        {
            if (c == '(' || c == '{' || c == '[')
            {
                cout << "enter2" << endl;
                st.push(c);
            }
            else
            {
                cout << "enter3" << endl;
                if (st.empty())
                {
                    cout << "enter4" << endl;

                    return false;
                }
                else
                {

                    if ((c == ')' && st.top() == '(') || (c == '}' && st.top() == '{') || (c == ']' && st.top() == '['))
                    {
                        cout << "enter5" << endl;
                        st.pop();
                        // if (st.empty())
                        // {
                        //     cout << "enter6" << endl;

                        //     return true;
                        // }
                        // else
                        // {
                        //     cout << "enter7" << endl;
                        //     continue;
                        // }
                    }
                    else
                    {

                        return false;
                    }
                }
            }
        }
        return st.empty();
    }
};

int main()
{
    Solution s;
    s.isValid("}");

    return 0;
}