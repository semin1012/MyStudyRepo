#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int seconds[10000];
int main(void) {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int nums[20] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10,
        11, 12, 13, 14, 15, 16, 17, 18, 19, 20};
    int a, b;
    for ( int i = 0 ; i < 10; i++ ) {
        cin >> a >> b;
        for ( int j = 0; j < (b-a+1)/2; j++ ) swap(nums[a+j-1], nums[b-j-1]);
    }
    for ( int i = 0 ; i < 20; i++ )
        cout << nums[i] << " ";
}