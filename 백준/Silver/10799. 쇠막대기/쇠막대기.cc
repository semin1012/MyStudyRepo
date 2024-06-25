#include <iostream>
#include <stack>
#include <string>
#include <algorithm>
using namespace std;

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	string str;
	cin >> str;
	stack<char> s;
	bool prev = false;	// 이전에 )이거엿냐?
	int result = 0;
	for (auto c : str)
	{
		if (c == '(') {
			s.push(c);
			prev = false;
		}
		else
		{
			if (prev == true) 
			{
				result++;
				s.pop();
			}
			else 
			{
				s.pop();
				result += s.size();
				prev = true;
			}
		}
	}
	cout << result;
}