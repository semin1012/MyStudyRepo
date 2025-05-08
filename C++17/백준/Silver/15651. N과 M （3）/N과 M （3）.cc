#include <iostream>
using namespace std;
#define MAX 8

int n, m;
int arr[MAX];

void Func(int k)
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
        arr[k] = i;
        Func(k+1);
    }
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    cin >> n >> m;
    Func(0);
}