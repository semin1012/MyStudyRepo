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
        for ( int j = 0; j < n-i; j++ ) cout << "*";
        cout << "\n";
    }
}