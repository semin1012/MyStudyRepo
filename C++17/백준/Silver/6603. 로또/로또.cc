#include <iostream>
#include <algorithm>
#define MAX 13
using namespace std;

int num, nums[MAX], tmp[6];
bool visited[MAX];

void Func(int k, int s)
{
    if (k == 6)
    {
        for (int i = 0; i < 6; i++)
            cout << tmp[i] << ' ';
        cout << '\n';
        return;
    }
    for (int i = s; i < num; i++)
    {
        if (visited[i]) continue;
        visited[i] = true;
        tmp[k] = nums[i];
        Func(k+1, i);
        visited[i] = false;
    }
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    while (true)
    {
        cin >> num;
        if (num == 0) return 0;

        fill(visited, visited + MAX, false);
        for (int i = 0; i < num; i++)
            cin >> nums[i];
        Func(0, 0);
        cout << '\n';
    }
}