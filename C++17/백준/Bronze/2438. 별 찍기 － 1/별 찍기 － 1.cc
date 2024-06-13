#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int main(void) {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int n, cnt = 1;
    cin >> n;
    for ( int i = 0; i < n; i++ ) {
        for ( int i = 0; i < cnt; i++ ) 
            cout << "*";
        cnt++;
        cout << '\n';
    }
}