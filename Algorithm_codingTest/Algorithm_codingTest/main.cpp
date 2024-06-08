#include <iostream>
#include <vector>
#include <string>
using namespace std;

// 백준 11720번
// N개의 숫자가 공백 없이 쓰여있다. 이 숫자를 모두 합해서 출력하는 프로그램을 작성하시오.
// 첫째 줄에 숫자의 개수 N (1 ≤ N ≤ 100)이 주어진다. 둘째 줄에 숫자 N개가 공백없이 주어진다.

int main()
{
	int n;
	string numbers;

	cin >> n;
	cin >> numbers;


	int sum = 0;

	vector<int> nums;
	for (int i = 0; i < numbers.length(); i++)
	{
		sum += numbers[i] - '0';
	}
	cout << sum << endl;
}