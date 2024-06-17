#include <iostream>
#include <queue>
#include <vector>
#include <string>
using namespace std;

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);

	int n, k;
	cin >> n >> k;
	queue<int> q;
	vector<int> result;
	for (int i = 1; i <= n; i++)
		q.push(i);

	cout << "<";

	while (q.size() > 1) {
		for (int i = 1; i < k; i++) {
			int temp = q.front();
			q.pop();
			q.push(temp);
		}
		cout << q.front() << ", ";
		q.pop();
	}
	cout << q.front() << ">";
}