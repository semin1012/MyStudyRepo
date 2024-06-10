#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

// 백준 12891번 : DNA 비밀번호

/* 주몽은 철기군을 양성하기 위한 프로젝트에 나섰다. 
그래서 야철대장을 통해 철기군이 입을 갑옷을 만들게 하였다. 
야철대장은 주몽의 명에 따르기 위하여 연구에 착수하던 중 아래와 같은 사실을 
발견하게 되었다.

갑옷을 만드는 재료들은 각각 고유한 번호를 가지고 있다. 
갑옷은 두 개의 재료로 만드는데 두 재료의 고유한 번호를 합쳐서 
M(1 ≤ M ≤ 10,000,000)이 되면 갑옷이 만들어 지게 된다. 
야철대장은 자신이 만들고 있는 재료를 가지고 갑옷을 몇 개나 만들 수 있는지 궁금해졌다. 
이러한 궁금증을 풀어 주기 위하여 N(1 ≤ N ≤ 15,000) 개의 재료와 M이 주어졌을 때 
몇 개의 갑옷을 만들 수 있는지를 구하는 프로그램을 작성하시오. */

void Add(char c);
void Remove(char c);

int checkArr[4] = {};
int myArr[4] = {};
int checkCnt = 0;

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int allNum, partNum;
	cin >> allNum >> partNum;

	string str;
	cin >> str;


	for ( int i = 0 ; i < 4; i++ ) { 
		cin >> checkArr[i];
		if (checkArr[i] == 0)
			checkCnt++;
	}

	for (int i = 0; i < partNum; i++) {
		Add(str[i]);
	}

	int result = 0;
	if (checkCnt == 4)
		result++;

	for (int i = partNum; i < allNum; i++)
	{
		int j = i - partNum;
		Add(str[i]);
		Remove(str[j]);

		if (checkCnt == 4)
			result++;
	}

	cout << result << endl;
}

void Add(char c) 
{
	switch (c) {
	case 'A':
		myArr[0]++; 
		if (myArr[0] == checkArr[0])
			checkCnt++;
		break;
	case 'C':
		myArr[1]++;
		if (myArr[1] == checkArr[1])
			checkCnt++;
		break;
	case 'G':
		myArr[2]++;
		if (myArr[2] == checkArr[2])
			checkCnt++;
		break;
	case 'T':
		myArr[3]++;
		if (myArr[3] == checkArr[3])
			checkCnt++;
		break;
	}
}

void Remove(char c)
{
	switch (c) {
	case 'A':
		if (myArr[0] == checkArr[0])
			checkCnt--;
		myArr[0]--;
		break;
	case 'C':
		if (myArr[1] == checkArr[1])
			checkCnt--;
		myArr[1]--;
		break;
	case 'G':
		if (myArr[2] == checkArr[2])
			checkCnt--;
		myArr[2]--;
		break;
	case 'T':
		if (myArr[3] == checkArr[3])
			checkCnt--;
		myArr[3]--;
		break;
	}
}