#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int main(void) {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int n;
    cin >> n;
    for ( int i = 0; i < n; i++ ) {
        for ( int j = 0; j < i; j++ ) cout << " ";
        for ( int j = 0; j < 2*n-1-i*2; j++ ) cout << "*";
        cout << "\n";
    }
}