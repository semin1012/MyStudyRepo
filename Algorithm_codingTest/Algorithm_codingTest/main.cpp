#include <iostream>
#include <vector>
#include <string>
using namespace std;

// ���� 11720��
// N���� ���ڰ� ���� ���� �����ִ�. �� ���ڸ� ��� ���ؼ� ����ϴ� ���α׷��� �ۼ��Ͻÿ�.
// ù° �ٿ� ������ ���� N (1 �� N �� 100)�� �־�����. ��° �ٿ� ���� N���� ������� �־�����.

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