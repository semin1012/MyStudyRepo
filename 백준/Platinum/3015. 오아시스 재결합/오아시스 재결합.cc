#include <iostream>
#include <vector>
#include <algorithm>
#include <stack>
using namespace std;

// 백준 3015번 : 오아시스 재결합


int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	int n;
	long long result = 0;
	stack<pair<int, int>> heights;
	cin >> n;
	for ( int i = 0 ; i < n; i++ )
	{
		int h, cnt = 1;
		cin >> h;
		while (!heights.empty() && h >= heights.top().first) {
			result += heights.top().second;
			if (heights.top().first == h) {
				cnt += heights.top().second;
			}
			heights.pop();
		}
		if (!heights.empty()) result++;
		heights.push({ h, cnt });
	}
	cout << result;
}