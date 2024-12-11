#include <iostream>
#include <vector>
using namespace std;

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int n;
	cin >> n;
	vector<int> mins(n);
	vector<int> sums(n);
	int sum = 0;
	for (int i = 0; i < n; i++)
		cin >> mins[i];

	for (int i = 1; i < n; i++)
	{
		int key = mins[i];
		int j;
		for (j = i - 1; j >= 0 && mins[j] >= key; j--)
			mins[j + 1] = mins[j];
		mins[j + 1] = key;
	}
	sums[0] = mins[0];
	for (int i = 1; i < n; i++)
		sums[i] = sums[i - 1] + mins[i];
	for (int a : sums)
		sum += a;
	cout << sum;
}