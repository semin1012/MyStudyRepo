#include <iostream>
#include <algorithm>
#include <stack>
using namespace std;

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int h, m, c;
    cin >> h >> m >> c;

    if (m + c >= 60)
    {
        h += (m+c) / 60;
        if ( h >= 24 ) {
            h -= 24;
        }
        m = (m+c) % 60;
    }
    else m = m+c;

    cout << h << ' ' << m;
}