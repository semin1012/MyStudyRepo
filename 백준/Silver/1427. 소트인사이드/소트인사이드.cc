#include <iostream>
#include <string>
#include <vector>
using namespace std;

int main()
{
	string str;
	cin >> str;
	vector<int> nums(str.size());
	for (int i = 0; i < str.size(); i++)
		nums[i] = stoi(str.substr(i, 1));

	pair<int, int> max;
	for (int i = 0; i < str.size(); i++)
	{
		max.first = 0;
		max.second = i;
		for (int j = i; j < str.size(); j++)
		{
			if (max.first < nums[j])
			{
				max.first = nums[j];
				max.second = j;
			}
		}
		if (max.second != i)
		{
			pair<int, int> temp;
			temp = max;
			nums[max.second] = nums[i];
			nums[i] = max.first;
		}
	}
	for (int i = 0; i < str.size(); i++)
		cout << nums[i];
}