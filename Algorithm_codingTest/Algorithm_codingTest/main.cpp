#include <iostream>
#include <vector>
#include <algorithm>
#include <stack>
using namespace std;

// 백준 17298번 : 오큰수

/*  */

typedef pair<int, int> Node;

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int n;
	cin >> n;

	vector<int> nums(n, 0);
	vector<int> result(n, 0);

	for (int i = 0; i < n; i++)
	{
		cin >> nums[i];
	}

	stack<int> myStack;
	myStack.push(0); 

	for (int i = 1; i < n; i++) {
		while (!myStack.empty() && nums[myStack.top()] < nums[i]) {
			result[myStack.top()] = nums[i];
			myStack.pop();
		}

		myStack.push(i);
	}

	while (!myStack.empty()) {
		result[myStack.top()] = -1;
		myStack.pop();
	}

	for (int i = 0; i < n; i++)
	{
		cout << result[i] << " ";
	}
}