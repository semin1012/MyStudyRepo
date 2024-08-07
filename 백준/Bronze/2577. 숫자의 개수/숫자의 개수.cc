#include <iostream>
using namespace std;

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);

	int a, b, c;
	int result[10]{};
	int temp;
	cin >> a >> b >> c;

	temp = a * b * c;
	while (temp > 0)
	{
		result[temp % 10]++;
		temp = temp / 10;
	}

	for (int i = 0; i < 10; i++)
		cout << result[i] << '\n';
}