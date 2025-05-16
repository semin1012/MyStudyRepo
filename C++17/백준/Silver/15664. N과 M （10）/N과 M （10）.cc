#include <iostream>
#include <algorithm>
#define MAX 9
using namespace std;

int num[MAX];
int arr[MAX];
bool visited[MAX];
int n, m;

void Func(int k, int s)
{
    if (k == m)
    {
        for (int i = 0; i < m; i++)
            cout << arr[i] << ' ';
        cout << '\n';
        return;
    }
    int temp = -1;
    int idx = 0;
    if (k > 0) idx = s;
    for (int i = idx; i < n; i++)
    {
        if (temp == num[i]) continue;
        if (visited[i]) continue;
        visited[i] = true;
        arr[k] = num[i];
        temp = num[i];
        Func(k+1, i+1);
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
    sort(num, num + n);
    Func(0, 0);
}