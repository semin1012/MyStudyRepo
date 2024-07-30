#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;


int main()
{
	int t;
	int a_num, b_num;
	int result, temp;
	cin >> t;
	while (t--)
	{
		vector<int> a;
		vector<int> b;

		result = 0;

		cin >> a_num >> b_num;

		for (int i = 0; i < a_num; i++) {
			cin >> temp;
			a.push_back(temp);
		}
		for (int i = 0; i < b_num; i++) {
			cin >> temp;
			b.push_back(temp);
		}

		sort(a.begin(), a.end());
		sort(b.begin(), b.end());

		for (int t1 : a)
		{
			for (int t2 : b)
			{
				if ( t1 > t2 )result++;
				else break;
			}
		}

		cout << result << "\n";
	}
}
