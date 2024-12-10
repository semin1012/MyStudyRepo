#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

void InsertSort(vector<int>& nums)
{
	int i, j, key;
	for (i = 1; i < nums.size(); i++)
	{
		key = nums[i];
		for (j = i - 1; j >= 0 && nums[j] > key; j--)
			nums[j + 1] = nums[j];
		nums[j + 1] = key;
	}
}

int main()
{
	srand(time(0));
	vector<int> nums = { 0, 1, 2, 3, 4, 5, 6, 7, 8, 9 };
	random_shuffle(nums.begin(), nums.end());

	cout << "정렬 전: ";
	for (int num : nums)
		cout << num << " ";
	cout << endl;

	InsertSort(nums);

	cout << "정렬 후: ";
	for (int num : nums)
		cout << num << " ";
	cout << endl;
}