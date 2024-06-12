#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

// 백준 2587번 : 대표값2

int main(void)
{
    vector<int> n(5, 0);
    int sum = 0;
    for ( int i = 0 ; i < 5; i++ ) {
        cin >> n[i];
        sum += n[i];
    }
    sort(n.begin(), n.end());
    int avg = sum / 5;
    cout << avg << endl << n[2];
}