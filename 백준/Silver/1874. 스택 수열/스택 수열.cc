#include <iostream>
#include <stack>
#include <queue>
using namespace std;

//char result[1'000'000];

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);

	int n, num, curNum = 1;
	cin >> n;

	stack<int> st;
	queue<char> result;
	int cnt = 0;
	bool isVaild = true;

	while (n--)
	{
		cin >> num;

		if (st.empty())	// st가 비어있을 때
		{
			if (num < curNum) {
				isVaild = false;
				break;
			}
			for (curNum; curNum <= num; curNum++)
			{
				st.push(curNum);
				result.push('+');
				//result[cnt++] = '+';
			}

			//result[cnt++] = '-';
			result.push('-');
			st.pop();
		}

		else if (st.top() < num)
		{
			if (curNum > num)
			{
				isVaild = false;
				break;

			}
			while (st.top() != num)
			{
				for (curNum; curNum <= num; curNum++) {
					st.push(curNum);
					//result[cnt++] = '+';
					result.push('+');
				}
			}
		}

		while (!st.empty() && st.top() >= num)
		{
			//result[cnt++] = '-';
			result.push('-');
			st.pop();
		}
	}

	if (isVaild == true)
	{
		while (!result.empty())
		{
			cout << result.front() << "\n";
			result.pop();
		}
		/*for (int i = 0; i < cnt; i++)
		{
			cout << result[i] << "\n";
		}*/
	}
	else cout << "NO\n";
}