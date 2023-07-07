// You are given a stack / deque of integers 'MY-STACK' and an integer ‘X’.Your task is to insert ‘X’ to the bottom of  ‘MY - STACK’ and return the updated stack / deque.

#include <bits/stdc++.h>
using namespace std;
stack<int> pushAtBottom(stack<int> &myStack, int x)
{
    stack<int> s;

    while (!myStack.empty())
    {
        s.push(myStack.top());
        myStack.pop();
    }
    s.push(x);
    while (!s.empty())
    {
        myStack.push(s.top());
        s.pop();
    }
    return myStack;
}

int main()
{

    return 0;
}