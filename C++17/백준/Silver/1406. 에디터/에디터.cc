#include <iostream>
#include <list>
#include <string>
using namespace std;

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);

	string str;
	cin >> str;
	list<char> l;
	for (char a : str) l.push_back(a);
	list<char>::iterator cursor = l.end();
	int m;
	cin >> m;

	while (m--) {
		char t;
		cin >> t;
		switch (t) {
		case 'L':
			if (cursor != l.begin()) cursor--;
			break;
		case 'D':
			if (cursor != l.end()) cursor++;
			break;
		case 'B':
			if (cursor != l.begin()) {
				cursor--;
				cursor = l.erase(cursor);
			}
			break;
		case 'P':
			char c;
			cin >> c;
			l.insert(cursor, c);
			break;
		}
	}
	for (char a : l) cout << a;
}