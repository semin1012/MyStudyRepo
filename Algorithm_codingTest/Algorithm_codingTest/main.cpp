#include <iostream>
#include <vector>
#include <string>
using namespace std;

// 백준 11659번 : 구간 합 구하기 4

// 수 N개가 주어졌을 때, i번째 수부터 j번째 수까지 합을 구하는 프로그램을 작성하시오

// 첫째 줄에 수의 개수 N과 합을 구해야 하는 횟수 M이 주어진다. 
// 둘째 줄에는 N개의 수가 주어진다. 수는 1,000보다 작거나 같은 자연수이다. 
// 셋째 줄부터 M개의 줄에는 합을 구해야 하는 구간 i와 j가 주어진다.

// 총 M개의 줄에 입력으로 주어진 i번째 수부터 j번째 수까지 합을 출력한다.

int main()
{
	int numCnt;
	int sumCnt;

	cin >> numCnt >> sumCnt;

	int sumNumbers[100001] = {};

	for (int i = 1; i <= numCnt; i++)
	{
		int temp;
		cin >> temp;
		sumNumbers[i] = sumNumbers[i-1] + temp;

		cout << sumNumbers[i] << " ";
	}

	for (int i = 0 ; i < sumCnt; i++ )
	{
		int left;
		int right;
		
		cin >> left >> right;

		cout << sumNumbers[right] - sumNumbers[left - 1] << endl;
	}
}