#include <iostream>
#include <stack>
#include <string>
using namespace std;

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);

	string str;
	stack<char> st;
	char pre;
	int temp = 1;
	int aswer = 0;
	bool isValid = true;
	cin >> str;
	for (char c : str)
	{
		if (c == '(' || c == '[')
		{
			st.push(c);
			if (c == '(') temp *= 2;
			else temp *= 3;
		}
		else if (c == ']')
		{
			if (st.empty() || st.top() != '[') {
				isValid = false;
				break;
			}
			st.pop();
			if (pre == '[')
			{
				aswer += temp;
				temp /= 3;
			}
			else temp /= 3;
		}
		else if (c == ')')
		{
			if (st.empty() || st.top() != '(') {
				isValid = false;
				break;
			}
			st.pop();
			if (pre == '(')
			{
				aswer += temp;
				temp /= 2;
			}
			else temp /= 2;
		}
		pre = c;
	}

	if (isValid == false || st.size() > 0) cout << "0\n";
	else cout << aswer << "\n";
}