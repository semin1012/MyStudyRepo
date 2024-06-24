#include <iostream>
#include <deque>
#include <string>
#include <algorithm>
using namespace std;
void print_result(deque<int>& d) {
	cout << '[';
	for (int i = 0; i < d.size(); i++)
	{
		cout << d[i];
		if (i + 1 != d.size())
			cout << ',';
	}
	cout << "]\n";
}
int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	int t;
	cin >> t;
	while (t--) {
		int n = 0;
		bool isReverse = 0, error = false;
		string str;
		string dqNum;
		deque<int> dq;
		cin >> str >> n;
		cin >> dqNum;
		int temp = 0;
		for (int i = 1; i < dqNum.length()-1; i++) {
			if (dqNum[i] == ',') {
				dq.push_back(temp);
				temp = 0;
			}
			else {
				temp = temp * 10 + (dqNum[i] - '0');
			}
		}
		if (temp != 0) dq.push_back(temp);

		for ( int i = 0; i < str.length(); i++ ) {
			if (str[i] == 'R') {
				isReverse = 1 - isReverse;
			}
			else {
				if (dq.empty()) {
					cout << "error\n";
					error = true;
					break;
				}
				if (isReverse)
					dq.pop_back();
				else dq.pop_front();
			}
		}

		if (error == false) {
			cout << "[";
			if (!dq.empty()) {
				if (isReverse)
					reverse(dq.begin(), dq.end());
				for (int i = 0; i < dq.size() - 1; i++) {
					cout << dq[i] << ",";
				}
				cout << dq.back();
			}
			cout << "]\n";
		}
	}
}