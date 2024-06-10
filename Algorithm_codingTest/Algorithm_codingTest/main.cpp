#include <iostream>
#include <vector>
#include <algorithm>
#include <deque>
using namespace std;

// 백준 11003번 : 최솟값 찾기 1

/* N개의 수 A1, A2, ..., AN과 L이 주어진다.

Di = Ai-L+1 ~ Ai 중의 최솟값이라고 할 때, D에 저장된 수를 출력하는 프로그램을 
작성하시오. 이때, i ≤ 0 인 Ai는 무시하고 D를 구해야 한다. */

typedef pair<int, int> Node;

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int numCnt, size;
	cin >> numCnt >> size;

	deque<Node> myDeque;

	for (int i = 0; i < numCnt; i++) {
		int n;
		cin >> n;

		while (myDeque.size() && myDeque.back().second >= n) {
			myDeque.pop_back();
		}

		myDeque.push_back(Node(i, n));

		if (myDeque.front().first <= i - size) {
			myDeque.pop_front();
		}

		cout << myDeque.front().second << " ";
	}



}