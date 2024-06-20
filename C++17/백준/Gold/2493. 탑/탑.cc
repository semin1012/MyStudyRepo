#include <iostream>
#include <stack>
using namespace std;

int N;
stack<pair<int,int>> tower;

int main() {
  ios_base::sync_with_stdio(0);
  cin.tie(0);

  cin >> N;  
  for (int i = 1; i <= N; i++) {
    int height;
    cin >> height;
    while (!tower.empty()) {
        if (height < tower.top().second){
            cout << tower.top().first << '\n';
            break;
        }
        tower.pop();
    }
    if ( tower.empty() ) cout << "0\n";
    tower.push(make_pair(i, height));
  }
}