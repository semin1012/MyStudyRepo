#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
using namespace std;

int num[2][7] = {};

int main(void)
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);

	int n, k;
	cin >> n >> k;
	
	int s, o, result = 0;
	for (int i = 0; i < n; i++) {
		cin >> s >> o;
		num[s][o]++;
	}

	for (int i = 1; i <= 6; i++) {
		for (int j = 0; j < 2; j++) {
			result += num[j][i] / k;
			if (num[j][i] % k) result++;
		}
	}
	cout << result;
}