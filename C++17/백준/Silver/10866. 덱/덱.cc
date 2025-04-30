#include <iostream>
#include <deque>
#include <string>
using namespace std;

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	deque<int> dq;
	int n, x;
	cin >> n;
	while (n--)
	{
		string str;
		cin >> str;
		if (str == "push_front") {
			cin >> x;
			dq.push_front(x);
		}
		else if (str == "push_back") {
			cin >> x;
			dq.push_back(x);
		}
		else if (str == "pop_front") {
			if (!dq.empty()) {
				printf("%d\n", dq.front());
				dq.pop_front();
			}
			else printf("-1\n");
		}
		else if (str == "pop_back") {
			if (!dq.empty()) { 
				printf("%d\n", dq.back());
				dq.pop_back(); 
			}
			else printf("-1\n");
		}
		else if (str == "size") {
			printf("%d\n", dq.size());
		}
		else if (str == "empty") {
			if (dq.empty()) printf("1\n");
			else printf("0\n");
		}
		else if (str == "front") {
			if (!dq.empty()) printf("%d\n", dq.front());
			else printf("-1\n");
		}
		else {
			if (!dq.empty()) printf("%d\n", dq.back());
			else printf("-1\n");
		}
	}
}