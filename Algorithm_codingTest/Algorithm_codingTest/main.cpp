#include <iostream>
#include <vector>
#include <algorithm>
#include <queue>
using namespace std;

// 백준 2164번 : 카드게임

/*  */

typedef pair<int, int> Node;

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int n;
	cin >> n;

	queue<int> myQueue;

	for (int i = 1; i <= n; i++)
		myQueue.push(i);

	while (myQueue.size() > 1) {
		myQueue.pop();				// pop = 1, 가장 앞에 것. 선입선출
		myQueue.push(myQueue.front());	// 맨 앞에 것을 뒤에 추가해준다
		myQueue.pop();					// 추가해줬으니 빼 준다.
	}

	cout << myQueue.front();
}