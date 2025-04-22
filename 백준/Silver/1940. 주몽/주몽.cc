#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int n, m;
	cin >> n >> m;
	vector<int> nums(n, 0);

	for (int i = 0; i < n; i++)
		cin >> nums[i];

	sort(nums.begin(), nums.end());

	int startIdx = 0, endIdx = n - 1, result = 0;

	while (startIdx < endIdx)
	{
		if (nums[startIdx] + nums[endIdx] < m)
			startIdx++;

		else if (nums[startIdx] + nums[endIdx] > m)
			endIdx--;

		else
		{
			result++;
			startIdx++;
			endIdx--;
		}

	}

	cout << result;
}