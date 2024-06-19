#include <iostream>
#include <stack>
#include <string>
using namespace std;

stack<int> nums;

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	int n;
	cin >> n;
	while (n--) {
		int num;
		cin >> num;
		if (num == 0) {
			nums.pop();
		}
		else nums.push(num);
	}
	int sum = 0;
	while(!nums.empty()) {
		sum += nums.top();
		nums.pop();
	}
	cout << sum;
}