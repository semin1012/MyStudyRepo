#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int n;
	cin >> n;
	vector<int> nums(n, 0);

	for (int i = 0; i < n; i++)
		cin >> nums[i];

	sort(nums.begin(), nums.end());

	int pivot = 0, result = 0;
	for (int z = 0; z < n; z++)
	{
		pivot = nums[z];
		int i = 0, j = n - 1;

		while (i < j)
		{
			if (nums[i] + nums[j] == pivot)
			{
				if (i != z && j != z)
				{
					result++;
					break;
				}
				else if (i == z)
					i++;
				else if (j == z)
					j--;
			}

			else if (nums[i] + nums[j] < pivot)
				i++;

			else j--;
		}
	}

	cout << result;
}