#include <iostream>
#include <algorithm>
#include <utility>
#include <stack>
using namespace std;

int N;
int a[1000000] = {};
int arr[1000000] = {};
stack<int> nums;

int main() {
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  cin >> N;  
  for ( int i = 0 ; i < N; i++ ) cin >> a[i];
  for ( int i = N-1; i >= 0; i-- ) {
    while ( !nums.empty() && nums.top() <= a[i] ) nums.pop();
    if ( nums.empty()) 
        arr[i] = -1;
    else 
        arr[i] = nums.top();
    nums.push(a[i]);
  }
  for ( int i = 0 ; i < N ; i++ ) cout << arr[i] << ' ';
}