#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

// 백준 1253번 : 좋은 수

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int N = 0;

	cin >> N;

	vector<int> nums(N, 0);

	for (int i = 0; i < N; i++)
	{
		cin >> nums[i];
	}

	sort(nums.begin(), nums.end());

	int result = 0;

	for (int i = 0; i < N; i++)
	{
		long find = nums[i];	// 좋은 수인지 판별할 값
		int start = 0;
		int end = N - 1;

		while (start < end)
		{
			int sum = nums[start] + nums[end];

			if (sum == find)
			{
				if (start != i && end != i)
				{
					result++;
					break;
				}

				else if (start == i)
					start++;

				else if (end == i)
					end--;
			}

			else if (sum > find)
				end--;

			else if (sum < find)
				start++;    
		}
	}

	cout << "result: " << result << endl;
}