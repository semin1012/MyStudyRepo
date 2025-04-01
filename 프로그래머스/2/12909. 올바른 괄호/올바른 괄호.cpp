#include<string>
#include <iostream>
#include <stack>

using namespace std;

bool solution(string s)
{
    bool answer = true;
    int n = 0;
    for (int i = 0; i < s.length(); i++)
    {
        if (n < 0) return false;
        if (s[i] == '(') n++;
        else if (s[i] == ')') n--;
    }

    return (n == 0);
}