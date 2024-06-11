#include <iostream>
using namespace std;

// 백준 10869번 : 사칙연산

int main()
{
	ios::sync_with_stdio(false);
	cout.tie(NULL);
	cin.tie(NULL);
	int a, b;
	cin >> a >> b;
	cout << a + b << '\n' << a-b << '\n' << a*b << '\n' << a/b << '\n' << a%b;
}