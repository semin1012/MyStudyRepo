#include <iostream>
#include <limits.h>
using namespace std;

int main()
{
	int nums[7];
	int result = 0, min = INT_MAX;
	
	for (int i = 0; i < 7; i++)
	{
		cin >> nums[i];
		if (nums[i] % 2 != 0)
		{
			result += nums[i];
			if (min > nums[i])
				min = nums[i];
		}
	}

	if (result == 0) cout << "-1";
	else
	{
		cout << result << "\n";
		cout << min;
	}
}
