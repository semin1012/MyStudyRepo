#include <iostream>
#include <vector>
#include <algorithm>
#include <stack>
using namespace std;

// 백준 1874번 : 스택 수열

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);

	int cnt;
	cin >> cnt;

	int num = 1;	// 자연수 값

	stack<int> myStack;
	vector<char> result;

	for (int i = 0; i < cnt; i++) {
		int sy;
		cin >> sy;
		
		while (sy >= num) {
			myStack.push(num);
			num++;
			result.push_back('+');
		}

		if (sy == myStack.top()) {
			myStack.pop();
			result.push_back('-');
		}

		else {
			cout << "NO";
			return 0 ;
		}
	}

	for (auto a : result ) {
		cout << a << '\n';
	}
}