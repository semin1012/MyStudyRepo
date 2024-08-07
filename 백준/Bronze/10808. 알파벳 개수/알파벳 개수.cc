#include <iostream>
using namespace std;

int alphas[26];

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);

	string str;
	cin >> str;

	for (int i = 0; i < str.length(); i++)
	{
		if (isupper(str[i])) str[i] += ' ';
		alphas[str[i] - 'a']++;
	}

	for (int i = 0; i < 26; i++)
	{
		cout << alphas[i] << " ";
	}
}