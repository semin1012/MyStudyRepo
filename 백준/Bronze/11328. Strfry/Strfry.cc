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

	int n;
	cin >> n;

	for (int i = 0; i < n; i++) {
		string str1, str2;
		cin >> str1 >> str2;
		sort(str1.begin(), str1.end());
		sort(str2.begin(), str2.end());
		int possible = true;
		for (int i = 0; i < str1.size(); i++) {
			if (str1[i] != str2[i]) {
				cout << "Impossible\n";
				possible = false;
				break;
			}
		}
		if (possible == true) cout << "Possible\n";
	}

}