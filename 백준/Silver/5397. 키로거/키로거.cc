#include <iostream>
#include <list>
using namespace std;

int main()
{
	ios::sync_with_stdio(0);
	cin.tie(0);
	int n;
	cin >> n;

	for (int i = 0; i < n; i++)
	{
		string temp;
		list<char> result;
		list<char>::iterator it = result.begin();
		cin >> temp;
		for (char c : temp)
		{
			switch (c)
			{
			case '-':
				if (it != result.begin()) {
					it--;
					it = result.erase(it);
				}
				break;
			case '<':
				if (it != result.begin())
					it--;
				break;
			case '>':
				if (it != result.end())
					it++;
				break;
			default:
				it = result.insert(it, c);
				it++;
				break;
			}
		}
		for (auto c : result)
			cout << c;
		cout << "\n";

	}
}