#include <iostream>
using namespace std;
#define MAX 9

int n, m;
int arr[9];

void Func(int k)
{
    if (k == m)
    {
        for (int i = 0; i < m; i++)
            cout << arr[i] << " ";
        cout << '\n';
        return;
    }
    int s = 1;
    if (k != 0) s = arr[k-1];
    for (int i = s; i <= n; i++)
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