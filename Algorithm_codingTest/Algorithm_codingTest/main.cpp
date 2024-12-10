#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int main()
{
	srand(time(0));
	vector<int> nums = { 0, 1, 2, 3, 4, 5, 6, 7, 8, 9 };
	random_shuffle(nums.begin(), nums.end());

	cout << "정렬 전: ";
	for (int num : nums)
		cout << num << " ";
	cout << endl;

	for (int i = 1; i < nums.size(); i++)
	{
		int j = i - 1;
		while (j >= 0)
		{
			if (nums[j] < nums[i])
			{
				int temp = nums[j];
				nums[j] = nums[i];
				nums[i] = temp;
				break;
			}
			j--;
		}
		if (j < 0) j = 0;
		for (int z = i; z > j; z--)
		{
			int temp = nums[z];
			nums[z] = nums[z - 1];
			nums[z - 1] = temp;
		}
	}
	cout << "정렬 후: ";
	for (int num : nums)
		cout << num << " ";
	cout << endl;
}