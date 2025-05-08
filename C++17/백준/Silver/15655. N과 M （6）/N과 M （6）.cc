#include <iostream>
#include <algorithm>
using namespace std;
#define MAX 9

int n, m;
int num[MAX];
int arr[MAX];

void Func(int s, int k)
{
    if (k == m)
    {
        for (int i = 0; i < m; i++)
            cout << arr[i] << ' ';
        cout << '\n';
    }
    for (int i = s; i < n; i++)
    {
        arr[k] = num[i];
        Func(i+1, k+1);
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
    sort(num, num+n);
    Func(0, 0);
}