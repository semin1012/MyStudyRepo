#include <iostream>
using namespace std;

int n, m;
bool used[10];
int arr[10];

void func(int k)
{
    if (k == m)
    {
        for (int i = 0; i < m; i++)
            cout << arr[i] << " ";
        cout << '\n';
        return;
    }
    for (int i = 1; i <= n; i++)
    {
        if (used[i]) continue;
        used[i] = true;
        arr[k] = i;
        func(k+1);
        used[i] = false;
    }
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    
    cin >> n >> m;
    func(0);
}