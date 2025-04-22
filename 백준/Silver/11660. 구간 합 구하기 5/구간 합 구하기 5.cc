#include <string>
#include <vector>
#include <iostream>

using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	int n, m;
	cin >> n >> m;
	vector<vector<int>> sums(n + 1, vector<int>(n + 1));
	
	for (int i = 1; i <= n; i++)
	{
		for (int j = 1; j <= n; j++)
		{
			cin >> sums[i][j];
			sums[i][j] = sums[i][j] + sums[i - 1][j] + sums[i][j - 1] - sums[i - 1][j - 1];
		}
	}

	int result = 0;
	int x1, x2, y1, y2;
	for (int i = 0; i < m; i++)
	{
		cin >> x1 >> y1 >> x2 >> y2;
		result = sums[x2][y2] + sums[x1 - 1][y1 - 1] - sums[x2][y1 - 1] - sums[x1 - 1][y2];
		cout << result << '\n';
	}	
}