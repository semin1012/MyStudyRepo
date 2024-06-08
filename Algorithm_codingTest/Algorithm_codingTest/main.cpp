#include <iostream>
#include <vector>
using namespace std;

// 백준 11660번 : 구간 합 구하기 2


int arr[1025][1025];
int dp[1025][1025];

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);


	int n, q;
	cin >> n >> q;

	// vector<vector<int>> arr(n + 1, vector<int>(n + 1, 0));

	for (int i = 1; i <= n; i++)
	{
		for (int j = 1; j <= n; j++)
		{
			cin >> arr[i][j];
			dp[i][j] = dp[i][j - 1] + dp[i - 1][j] - dp[i - 1][j - 1] + arr[i][j];

		}
	}

	cout << "숫자 넣기 끝 " << endl;

	for (int i = 0; i < q; i++)
	{
		int x1, x2, y1, y2;
		cin >> x1 >> y1 >> x2 >> y2;
		int result = dp[x2][y2] - dp[x2][y1 - 1] - dp[x1 - 1][y2] + dp[x1 - 1][y1 - 1];
		cout << result << endl;
	}

	/*int x1, x2, y1, y2;
	for (int i = 0; i < q; i++)
	{
		cin >> x1 >> y1 >> x2 >> y2;

		int sum = 0;

		for (int i = x1; i <= x2; i++)
		{
			for (int j = y1; j <= y2; j++)
			{
				sum += arr[i][j];
			}
		}
		cout << sum << endl;
	}*/


}