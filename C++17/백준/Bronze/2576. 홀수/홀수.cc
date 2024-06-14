#include <iostream>
#include <vector>
using namespace std;

// 백준 2576번 : 홀수

int main(void)
{
    int n[7];

    int sum = 0;
    int min = 101;

    for (int i = 0 ; i < 7 ; i++ ) {
        cin >> n[i];
        if ( n[i] % 2 == 1 ) {
            sum += n[i];
            if ( min > n[i])
                min = n[i];
        }
    }
    if ( sum != 0 )
        cout << sum << endl << min;
    else cout << -1;
}