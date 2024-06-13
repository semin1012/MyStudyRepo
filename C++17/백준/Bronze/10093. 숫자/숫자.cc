#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main(void) {
    int a, b;
    cin >> a >> b;
    if ( a > b ) swap(a, b);
    if ( a == b || b - a == 1) cout << 0 << endl;
    else {
        cout << b - a - 1 << endl;
        for ( long long i = a+1; i < b; i++ )
            cout << i << " ";
    }
}