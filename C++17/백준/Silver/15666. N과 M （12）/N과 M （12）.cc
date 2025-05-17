#include <iostream>
#include <algorithm>
#define MAX 9
using namespace std;

int n, m;
int num[MAX];
int arr[MAX];

void Func(int k, int s)
{
    if (k == m)
    {
        for (int i = 0; i < m; i++)
            cout << arr[i] << " ";
        cout << '\n';
        return;
    }  
    for (int i = s; i < n; i++)
    {
        if (i > 0)
        {
            if (num[i-1] == num[i]) continue;
        }
        arr[k] = num[i];
        Func(k+1, i);
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