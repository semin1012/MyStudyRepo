#include <iostream>
#include <vector>
using namespace std;

// 백준 10986번 : 나머지 합 구하기


int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int cnt, num;
	cin >> cnt >> num;

	vector<long> dp(cnt + 1, 0);	// 합계 계산용
	vector<long> remain(num + 1, 0);	// 나머지 저장용
	for (int i = 1; i <= cnt; i++) 
	{
		int temp = 0;
		cin >> temp;
		dp[i] = dp[i - 1] + temp;
		cout << dp[i] << " ";
	}

	int result = 0;

	for (int i = 0; i < cnt; i++)
	{
		int remainder = dp[i] % num;

		if (remainder == 0)
			result++;

		remain[remainder]++;
	}

	for (int i = 0; i < num; i++)
	{
		if (remain[i] > 1)	// 나머지가 2개 이상인 애만 검사한다
			result = result + (remain[i] * (remain[i] - 1)) / (2 * (2 - 1));
			// 나머지가 같은 애들 중 2개를 뽑는 경우의 수를 구한다
			// 컴베이션(순열) 공식을 이용한다, 책에 써둠
	}

	cout << endl << result << endl;
}