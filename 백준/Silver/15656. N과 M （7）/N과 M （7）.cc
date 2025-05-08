#include <iostream>
#include <algorithm>
using namespace std;
#define MAX 8

int n, m;
int arr[MAX];
int num[MAX];

void Func(int k)
{
    if (k == m)
    {
        for (int i = 0; i < m; i++)
            cout << arr[i] << " ";
        cout << '\n';
        return;
    }
    for (int i = 0; i < n; i++)
    {
        arr[k] = num[i];
        Func(k+1);
    }
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    cin >> n >> m;
    for (int i = 0; i < n; i++)
        cin >> num[i];
    sort(num, num + n);
    Func(0);
}