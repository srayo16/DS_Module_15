// Given three filled stacks namely ‘stack1’ ‘stack2’ and ‘stack3’ of positive numbers, the task is to find the possible equal maximum sum of the stacks with the removal of top elements allowed.

#include <bits/stdc++.h>
using namespace std;

int getSome(stack<int> s)
{

    int sum = 0;
    while (!s.empty())
    {
        sum += s.top();
        s.pop();
    }

    return sum;
}

int maxSum(stack<int> &s1, stack<int> &s2, stack<int> &s3)
{
    // Write your code here

    int sz1 = getSome(s1);
    int sz2 = getSome(s2);
    int sz3 = getSome(s3);

    while (true)
    {
        if (sz1 == sz2 && sz2 == sz3)
            break;

        else if (sz1 >= sz2 && sz1 >= sz3)
        {
            sz1 -= s1.top();
            s1.pop();
        }
        else if (sz2 >= sz1 && sz2 >= sz3)
        {
            sz2 -= s2.top();
            s2.pop();
        }
        else
        {
            sz3 -= s3.top();
            s3.pop();
        }
    }

    return sz1;
}

int main()
{

    return 0;
}