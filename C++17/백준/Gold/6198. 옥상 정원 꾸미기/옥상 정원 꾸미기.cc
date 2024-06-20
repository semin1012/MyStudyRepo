#include <iostream>
#include <algorithm>
#include <utility>
#include <stack>
using namespace std;

int N;
stack<int> b;

int main() {

  ios_base::sync_with_stdio(0);
  cin.tie(0);
  cin >> N;  
  long long res = 0;
  while (N--) {
    long long h;
    cin >> h;
    while (!b.empty() && h >= b.top()) 
        b.pop();
    res += b.size();
    b.push(h);
  }
  cout << res;
}