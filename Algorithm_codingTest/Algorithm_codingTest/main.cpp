#include <iostream>
#include <vector>
#include <string>
using namespace std;

// ���� 1546��: ���
// �����̴� �⸻��縦 ���ƴ�. �����̴� ������ �����ؼ� ���� ��������� �ߴ�. 
// �ϴ� �����̴� �ڱ� ���� �߿� �ִ��� �����. �� ���� M�̶�� �Ѵ�. 
// �׸��� ���� ��� ������ ����/M*100���� ���ƴ�.

// ���� ���, �������� �ְ����� 70�̰�, ���������� 50�̾����� 
// ���������� 50 / 70 * 100�� �Ǿ� 71.43���� �ȴ�.

// �������� ������ ���� ������ ���� ������� ��, ���ο� ����� ���ϴ� ���α׷��� �ۼ��Ͻÿ�.

int main()
{
	int cnt;
	int score[1000];

	cin >> cnt;
	for (int i = 0; i < cnt; i++)
	{
		cin >> score[i];
	}


	int sum = 0;
	int max = 0;

	for (int i = 0; i < cnt; i++)
	{
		sum += score[i];
		if (max < score[i])
			max = score[i];
	}

	float result = (float)sum * 100 / max / cnt;
	cout << result << endl;
}