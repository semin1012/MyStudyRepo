#include <iostream>
#include <deque>
#include <algorithm>
using namespace std;

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	deque<int> dq;
	int n, m, num, result = 0;
	cin >> n >> m;
	for (int i = 1; i <= n; i++) dq.push_back(i);
	while (m--) 
	{
		cin >> num;
		int idx = find(dq.begin(), dq.end(), num) - dq.begin();
		while (num != dq.front()) {
			if (idx > dq.size() - idx) {
				dq.push_front(dq.back());
				dq.pop_back();
				result++;
			}
			else {
				dq.push_back(dq.front());
				dq.pop_front();
				result++;
			}
		}
		dq.pop_front();
	}
	cout << result;
	
}