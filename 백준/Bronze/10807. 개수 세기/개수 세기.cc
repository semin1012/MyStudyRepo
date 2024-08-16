#include <iostream>
using namespace std;

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);

	int nums[202] = {};
	int n;
	int find;
	int temp;

	cin >> n;

	for (int i = 0; i < n; i++)
	{
		cin >> temp;
		nums[temp+101]++;
	}

	cin >> find;

	cout << nums[find+101];
}