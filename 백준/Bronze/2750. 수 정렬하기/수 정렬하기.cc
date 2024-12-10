#include <iostream>
using namespace std;

int main()
{
	ios::sync_with_stdio(0);
	cin.tie(0);

	int n;
	int nums[1000];
	cin >> n;
	for (int i = 0; i < n; i++)
		cin >> nums[i];
	for (int i = 0; i < n; i++ )
	{
		for (int j = i + 1; j < n; j++)
		{
			if (nums[j] < nums[i])
			{
				int temp = nums[j];
				nums[j] = nums[i];
				nums[i] = temp;
			}
		}
	}
	for (int i = 0; i < n; i++)
	{
		cout << nums[i] << endl;
	}
}