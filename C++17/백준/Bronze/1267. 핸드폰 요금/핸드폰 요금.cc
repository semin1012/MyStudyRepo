#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int seconds[10000];
int main(void) {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
   
    int n;
    cin >> n;
    int a = 0, b = 0;
    for ( int i = 0; i < n; i++ ) cin >> seconds[i];
    for ( int i = 0; i < n; i++ ) {
        a += (seconds[i] / 30 + 1) * 10;
        b += (seconds[i] / 60 + 1) * 15;
    }
    if ( a > b ) cout << "M " << b;
    else if ( a < b) cout << "Y " << a;
    else cout << "Y M " << a;
}