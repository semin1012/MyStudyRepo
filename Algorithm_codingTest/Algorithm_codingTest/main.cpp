#include <iostream>
#include <vector>
#include <algorithm>
#include <queue>
using namespace std;

// 백준 11286번 : 절댓값 힙 구현하기

struct compare
{
	bool operator()(int o1, int o2)
	{
		if (abs(o1) == abs(o2))
			return o1 > o2;
		else
			return abs(o1) > abs(o2);
	}
};

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int n;
	cin >> n;

	priority_queue<int, vector<int>, compare> myQueue;
	vector<int> nums(n, 0);
	for (int i = 0; i < n; i++) {
		cin >> nums[i];
	}

	for (int i = 0; i < n; i++) {
		if (nums[i] == 0)
		{
			if (myQueue.empty())
				cout << '0' << endl;
			else {
				cout << myQueue.top() << endl;
				myQueue.pop();
			}
		}

		else {
			myQueue.push(nums[i]);
		}
	}
}