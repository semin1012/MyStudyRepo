#include <iostream>
#include <algorithm>
#define MAX 8
using namespace std;

int n, m;
int num[MAX];
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
    for (int i = 0; i < n; i++)
    {
        if (i > 0)
        {
            if (num[i] == num[i-1]) continue;
        }
        arr[k] = num[i];
        Func(k+1);
    }
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    cin >> n >> m;
    for (int i = 0; i < n; i++)
        cin >> num[i];
    sort(num, num + n);
    Func(0);
}