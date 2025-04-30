#include <iostream>
#include <queue>
using namespace std;

string board[102];
int dist[102][102];
int dx[4] = {0, 0, -1, 1};
int dy[4] = {-1, 1, 0, 0};

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int n, m;
    queue<pair<int, int>> q;
    cin >> n >> m;
    for (int i = 0; i < n; i++)
        cin >> board[i];
    for (int i = 0; i < n; i++)
        fill(dist[i], dist[i]+m, -1);
    
    dist[0][0] = 0;
    q.push({0, 0});
    while (q.size() > 0)
    {
        pair<int, int> pos = q.front(); q.pop();
        for (int i = 0; i < 4; i++)
        {
            int x = pos.first + dx[i];
            int y = pos.second + dy[i];
            if (x < 0 || y < 0 || x >= m || y >= n) continue;
            if (board[y][x] == '0' || dist[y][x] != -1) continue;
            dist[y][x] = dist[pos.second][pos.first] + 1;
            q.push({x, y});
        }
    }

    cout << dist[n-1][m-1] + 1;
}