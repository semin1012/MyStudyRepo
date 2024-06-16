#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
using namespace std;

int main(void)
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);

	int n, x, result = 0;
	cin >> n;
	vector<int> num(n, 0);
	for (int i = 0; i < n; i++) {
		cin >> num[i];
	}
	sort(num.begin(), num.end());
	cin >> x;
	int left = 0, right = n -1, sum = 0;
	while (left < right) {
		sum = num[left] + num[right];
		if (sum == x) {
			result++;
			left++;
			right--;
		}
		else if (sum > x) {
			right--;
		}
		else left++;
	}
	cout << result;
}