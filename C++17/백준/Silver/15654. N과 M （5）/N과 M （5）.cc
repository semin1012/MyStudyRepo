#include <iostream>
#include <algorithm>
using namespace std;
#define MAX 9

int n, m;
int arr[MAX];
int ans[MAX];
bool used[MAX];

void Func(int k)
{
    if (k == m)
    {
        for (int i = 0; i < m; i++)
            cout << ans[i] << " ";
        cout << '\n';
        return;
    }
    for (int i = 0; i < n; i++)
    {
        if (used[i]) continue;
        used[i] = true;
        ans[k] = arr[i];
        Func(k+1);
        used[i] = false;
    }
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    cin >> n >> m;
    for (int i = 0; i < n; i++)
        cin >> arr[i];
    sort(arr, arr + n);
    Func(0);
}