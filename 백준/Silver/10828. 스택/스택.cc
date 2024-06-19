#include <iostream>
#include <stack>
#include <string>
using namespace std;

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	stack<int> nums;
	int n;
	cin >> n;
	string str;
	while (n--) {
		cin >> str;
		if (str == "push") {
			int num;
			cin >> num;
			nums.push(num);
		}
		else if (str == "pop") {
			if (!nums.empty()) {
				cout << nums.top() << '\n';
				nums.pop();
			}
			else cout << "-1\n";
		}
		else if (str == "size") {
			cout << nums.size() << '\n';
		}
		else if (str == "empty") {
			if (nums.empty()) cout << "1\n";
			else cout << "0\n";
		}
		else {
			if (!nums.empty()) cout << nums.top() << '\n';
			else cout << "-1\n";
		}
	}
}