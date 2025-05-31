#include <iostream>
#include <algorithm>
using namespace std;

int num;
int weight[302];
int durability[302];
int mx = 0;
int cnt = 0;

void Func(int a)
{
    if (a == num)
    {
        mx = max(mx, cnt);
        return;
    }
    if (durability[a] <= 0 || cnt == num - 1)
    {
        Func(a+1);
        return;
    }
    for (int i = 0; i < num; i++)
    {
        if (i == a || durability[i] <= 0) continue;
        durability[a] -= weight[i];
        durability[i] -= weight[a];
        if (durability[a] <= 0) cnt++;
        if (durability[i] <= 0) cnt++;
        Func(a+1);
        if (durability[a] <= 0) cnt--;
        if (durability[i] <= 0) cnt--;
        durability[a] += weight[i];
        durability[i] += weight[a];
    }
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    cin >> num;
    for (int i = 0; i < num; i++)
        cin >> durability[i] >> weight[i];
    Func(0);
    cout << mx << '\n';
}  