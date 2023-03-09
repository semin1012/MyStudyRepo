/*                         #### 9.30 ���� ��° ���� ####                          */

#include "stdafx.h"
#include <time.h>


// Ÿ�� ������
typedef int INT;	// int �� �Ȱ���, ���ο� �̸�
// #define int INT;	// ���� �Ȱ��� �ǹ��� �� ������ �ƿ� ġȯ�ϴ� ���� �ƴ�
// define �� ������ �߿� �̸��� ���� �ٲٴ� �Ϳ� �Ұ��ϴ�
// typedef �� int �� INT �� �� ��� ��� �����ϰ� �Ǵ� ���̴�
// int, char, long ���� �⺻ �ڷ��� ���� �ڷ����� ��κ� Ÿ�� �������� ���̴�


// ���丮��
int Factorial(int n) {
	int iReturn = 1;
	for (int i = 1; i <= n; ++i) {
		iReturn *= i;
	}
	return iReturn;
}

// ����Լ�(recursion)
// ������ �ͳ���
int Factorial_re(int n) {
	if (n == 1)
		return 1;
	return Factorial_re(n - 1) * n;
}

int main()
{	
	// clock_t => typedef long clock_t, �ᱹ long �� ���� ���̴�
	// �ڷ����� ���� ������ �����ϱ� ���� �������� �� �� �־ ����Ѵ�
	clock_t lPrevCount= clock();

	int n = 8;
	int iReturn = Factorial(10);

	clock_t lCurCount = clock();

	float fTime = (float)(lCurCount - lPrevCount) / 1000.f;

	printf("%d! ���: %d\n", n, iReturn);
	printf("�ݺ����� ó���ϴ� �� �ɸ� �ð�: %f\n", fTime);


	// INT a;

	//int A = 10;
	//int b = 10;
	//int d = 10;
	//int f = 10;

	//A = b + d;

	//f = A + d;

	// save("0714.cpp");
}

// Visual Studio
// ctrl + k, c			���� ���� �ּ�
// ctrl + k, f			���� ���� �� ����
// ctrl + r, r			����� ������, Ŭ����(����ü) �� �ϰ� ����
// alt + �巡��			���� �巡��

// ctrl + shift + f		Ư�� ���� ã��
// ctrl + shift + h		ã�� ���� �����ϱ�

// alt + �巡��			���� �巡��

// f12					���� ��ġ�� �̵�
// f5					����� ���� ����(���� + ����� ��� ����), �ߴ����� ���� ������...
// ctrl + f5			����� ���� ���α׷� ����
// shift + f5			����� ����
// f9					�ߴ��� ����
// ctrl + shift + f9	�ߴ��� ��� ����

// f10					����� ��忡��, �ش� �Լ� ���� 1 ���� ����
// f11					����� ��忡��, 1 ���� ���� (�Լ� ȣ���� ��� ���η� ����)
