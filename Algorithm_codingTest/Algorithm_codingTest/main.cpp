#include <iostream>
using namespace std;

int main()
{
	int n;
	cin >> n;

	int nums[100];
	int temp = n;
	int idx = 0;

	while (temp > 0)
	{
		if ( temp / 3 != 1 && temp / 3 != 0)
			nums[idx++] = temp / 3;
		temp = temp / 3;
	}

	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n; j++)
		{
			if (i >= n / nums[0] && i < (n / nums[0]) * 2 && j >= n / nums[0] && j < (n / nums[0]) * 2)
			{
				cout << " ";
			}
			else if (i >= n / nums[1] && i < (n / nums[1]) * 2 && j >= n / nums[1] && j < (n / nums[1]) * 2)
			{
				cout << " ";
			}
			else if (i % 3 == 1) {
				if (j % 3 == 1 ) cout << " ";
				else cout << "*";
			}
			else cout << "*";
		}
		cout << "\n";
	}
}
