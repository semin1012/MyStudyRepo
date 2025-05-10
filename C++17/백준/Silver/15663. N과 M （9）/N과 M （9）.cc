#include <iostream>
#include <algorithm>

using namespace std;
#define MAX 9

int n, m;
int num[MAX];
int arr[MAX];
bool visited[MAX];

void Func(int k)
{
    if (k == m)
    {
        for (int i = 0; i < m; i++)
            cout << arr[i] << ' ';
        cout << '\n';
        return;
    }
    int temp = 0;
    for (int i = 0; i < n; i++)
    {
        if (visited[i] || temp == num[i]) continue;
        visited[i] = true;
        arr[k] = num[i];
        temp = arr[k];
        Func(k+1);
        visited[i] = false;
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
    Func(0);
}