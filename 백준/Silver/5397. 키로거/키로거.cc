#include <iostream>
#include <list>
#include <string>
using namespace std;

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);

	int n;
	cin >> n;
	while (n--) {
		list<char> result;
		list<char>::iterator cursor = result.begin();

		string str;
		cin >> str;
		for (char c : str) {
			if (c == '<') {
				if (cursor != result.begin()) cursor--;
			}
			else if (c == '>') {
				if (cursor != result.end()) cursor++;
			}
			else if (c == '-') {
				if (cursor != result.begin()) {
					cursor--;
					cursor = result.erase(cursor);
				}
			}
			else
				result.insert(cursor, c);
		}

		for ( char c : result ) cout << c;
		cout << '\n';
	}
}