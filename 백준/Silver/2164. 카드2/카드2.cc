#include <iostream>
#include <queue>
#include <string>
using namespace std;

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	queue<int> q;
	int n, result = 0, a = 0;
	cin >> n;
	for (int i = 1; i <= n; i++) q.push(i);
	while (q.size() > 1 ) {
		q.pop();
		q.push(q.front());
		q.pop();
	}
	cout << q.front();
}