#include <iostream>
using namespace std;

// 백준 9498 : 시험 성적

int main()
{
	ios::sync_with_stdio(false);
	cout.tie(NULL);
	cin.tie(NULL);
	int score;
	cin >> score;
	if ( score >= 90)
		cout << "A";
	else if (score >= 80)
		cout << "B";
	else if (score >= 70)
		cout << "C";
	else if ( score >= 60)
		cout << "D";
	else 
		cout << "F";
}