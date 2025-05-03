#include <iostream>
#include <queue>

using namespace std;

int dx[4] = {0, 0, -1, 1};
int dy[4] = {-1, 1, 0, 0};
int visited[101][101];

int main()
{
    int n, m;
    cin >> n >> m;
    string board[101];
    for (int i = 0; i < n; i++)
        cin >> board[i];
    for (int i = 0; i < n; i++)
        fill(visited[i], visited[i]+m, -1);
    queue<pair<int, int>> q;
    q.push({0, 0});
    visited[0][0] = 1;

    while (!q.empty())
    {
        pair<int, int> cur = q.front();
        q.pop();
        if (cur.first == m-1 && cur.second == n-1)
            break;
        for (int i = 0; i < 4; i++)
        {
            int x = cur.first + dx[i];
            int y = cur.second + dy[i];
            if (x < 0 || y < 0 || x >= m|| y >= n) continue;
            if (visited[y][x] != -1 || board[y][x] == '0') continue;
            visited[y][x] = visited[cur.second][cur.first] + 1;
            q.push({x, y});
        }
    }
    cout << visited[n-1][m-1];
}