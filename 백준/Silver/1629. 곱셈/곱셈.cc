#include <iostream>
using namespace std;

long long Pow(long long a, long long b, long long c)
{
	if (b == 1) return a % c;
	long long value = Pow(a, b / 2, c);
	value = value * value % c;
	if (b % 2 == 0) return value;
	return value * a % c;
}

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	long long a, b, c;
	cin >> a >> b >> c;
	cout << Pow(a, b, c);
}