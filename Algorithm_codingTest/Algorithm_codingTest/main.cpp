#include <iostream>
#include <vector>
using namespace std;

// 백준 2490 : 윷놀이

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	vector<vector<int>> n(3, vector<int>(4, -1));
	int bae[3] = {}, dung[3] = {};


	for ( int j = 0 ; j < 3; j++ ) {
		for ( int i = 0 ; i < 4 ; i++ ) {
			cin >> n[j][i];
			if ( n[j][i] == 0 )
				bae[j]++;
			else if ( n[j][i] == 1 )
				dung[j]++;
		}
	}
	for ( int i = 0 ; i < 3; i++ ) { 
		if ( bae[i] == 1 && dung[i] == 3 )
			cout << "A\n";
		else if ( bae[i] == 2 && dung[i] == 2)
			cout << "B\n";
		else if ( bae[i] == 3 && dung[i] == 1)
			cout << "C\n";
		else if ( bae[i] == 4)
			cout << "D\n";
		else cout << "E\n";
	}
}