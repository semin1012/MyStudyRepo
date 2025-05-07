#include <iostream>
#include <vector>
using namespace std;

vector<pair<int, int>> vec;

void Hanoi(int n, int start, int dest)
{ 
	if (n == 1)
	{
		vec.push_back({ start, dest });
		return;
	}
	Hanoi(n - 1, start, 6 - start - dest);
	vec.push_back({ start, dest });
	Hanoi(n - 1, 6 - start - dest, dest);
}

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	int n;
	cin >> n;
	Hanoi(n, 1, 3);
	cout << vec.size() << '\n';
	for (int i = 0; i < vec.size(); i++)
		cout << vec[i].first << " " << vec[i].second << '\n';
}