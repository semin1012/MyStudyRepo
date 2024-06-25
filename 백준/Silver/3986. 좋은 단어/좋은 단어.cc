#include <iostream>
#include <stack>
#include <string>
#include <algorithm>
using namespace std;

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);

	int n;
	cin >> n;
	string str;
	int result = 0;
	while (n--) 
	{
		stack<char> s;
		bool check = true;
		cin >> str;
		for (auto c : str)
		{
			if (s.empty())
				s.push(c);
			else if (!s.empty() && s.top() == c) {
				s.pop();
			}
			else s.push(c);
		}
		if (s.empty())
			result++;
	}
	cout << result;
}