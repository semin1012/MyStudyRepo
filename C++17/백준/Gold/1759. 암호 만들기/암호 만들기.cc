#include <iostream>
#include <algorithm>
#define MAX 16
using namespace std;

int cnt, num;
char alpha[MAX];
char result[MAX];
bool visited[MAX];
int gat, con;

void Func(int k, int s)
{
    if (k == cnt)
    {
        gat = 0; con = 0;
        for (int i = 0; i < cnt; i++)
        {
            if (result[i] == 'a' || result[i] == 'e' || result[i] == 'i' 
            || result[i] == 'o' || result[i] == 'u')
                gat++;
            else con++;
        }
        if (gat < 1 || con < 2) return;
        for (int i = 0; i < cnt; i++)
            cout << result[i];
        cout << '\n';
        return;
    }
    for (int i = s; i < num; i++)
    {
        if (visited[i]) continue;
        visited[i] = true;
        result[k] = alpha[i];
        Func(k+1, i);
        visited[i] = false;
    }
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    cin >> cnt >> num;
    for (int i = 0; i < num; i++)
        cin >> alpha[i];
    sort(alpha, alpha + num);
    Func(0, 0);
}