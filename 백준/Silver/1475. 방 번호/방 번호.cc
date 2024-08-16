#include <iostream>
using namespace std;

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);

	int n;
	int a[10] = { };

	cin >> n;

	while (n > 0)
	{
		a[n % 10]++;
		n = n / 10;
	}

	int max = -1;
	int idx = 0;
	for (int i = 0; i < 10; i++)
	{
		if (a[i] > max)
		{
			max = a[i];
			idx = i;
		}
	}

	if (idx == 6 || idx == 9)
	{
		max = (a[6] + a[9]+1) / 2;
	}

	for (int i = 0; i < 10; i++)
	{
		if (i != 6 && i != 9)
		{
			if (a[i] > max)
			{
				max = a[i];
				idx = i;
			}
		}
		
	}
	
	cout << max;
}