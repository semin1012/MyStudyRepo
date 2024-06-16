#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
using namespace std;

int main(void)
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);

	int n, v, result = 0;
	cin >> n;
	vector<int> num(n, 0);
	for (int i = 0; i < n; i++)
		cin >> num[i];
	cin >> v;
	for (int i = 0; i < n; i++)
		if (num[i] == v)
			result++;
	cout << result;
}