#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int main(void) {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int nums[9];
    int max = 0, index;
    for ( int i = 0; i < 9; i++ ) {
        cin >> nums[i];
        if ( max < nums[i] ) {
            max = nums[i];
            index = i + 1;
        }
    }
    cout << max << '\n' << index;
}