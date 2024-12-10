#include <iostream>
#include <vector>  
#include <algorithm>
using namespace std;

int main()
{
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	int N;
	cin >> N;
	vector<pair<int, int>> A(N + 1);
	for (int i = 1; i < N + 1; i++)
	{
		cin >> A[i].first;
		A[i].second = i;
	}
	sort(A.begin(), A.end());
	int Max = 0;
	for (int i = 1; i < N + 1; i++)
	{
		if (Max < A[i].second - i)
			Max = A[i].second - i;
	}
	cout << Max + 1;
}