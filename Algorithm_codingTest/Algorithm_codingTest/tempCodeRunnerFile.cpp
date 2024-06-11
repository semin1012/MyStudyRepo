#include <iostream>
using namespace std;

// 백준 10871번 : X보다 작은 수

int main()
{
	ios::sync_with_stdio(false);
	cout.tie(NULL);
	cin.tie(NULL);

	int n, x;
	cin >> n >> x;

	for ( int i = 0 ; i < n ; i ++ ) {
		int num;
		cin >> num;
		if ( num < x )
			cout << num << " ";
	}
}