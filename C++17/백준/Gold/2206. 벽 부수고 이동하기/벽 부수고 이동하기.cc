#include <iostream>
#include <queue>
using namespace std;

string board[1001];
int dist[1001][1001][2];
int dx[4] = {0, 0, 1, -1};
int dy[4] = {1, -1, 0, 0};

struct Pos
{
    int x;
    int y;
    bool isBreakWall;
};

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int n, m;
    cin >> n >> m;
    for (int i = 0; i < n; i++)
        cin >> board[i];
    queue<Pos> q;
    dist[0][0][0] = 0;
    q.push({0, 0, false});
    
    while (!q.empty())
    {
        Pos cur = q.front();
        q.pop();
        if (cur.x == m-1 && cur.y == n-1) 
        {
            cout << dist[n-1][m-1][cur.isBreakWall] + 1;
            return 0;
        }
        for (int i = 0; i < 4; i++)
        {
            Pos next;
            next.x = cur.x + dx[i];
            next.y = cur.y + dy[i];
            next.isBreakWall = cur.isBreakWall;
            if (next.x < 0 || next.y < 0 || next.x >= m || next.y >= n) continue;
            if (dist[next.y][next.x][cur.isBreakWall]) continue;
            if (board[next.y][next.x] == '1')
            {
                if (cur.isBreakWall == true) continue;
                dist[next.y][next.x][1] = dist[cur.y][cur.x][cur.isBreakWall] + 1;
                next.isBreakWall = true;
                q.push(next);
            }
            else 
            {
                dist[next.y][next.x][cur.isBreakWall] = dist[cur.y][cur.x][cur.isBreakWall] + 1;
                q.push({next.x, next.y, cur.isBreakWall});
            }
        }
    }
    cout << "-1";
}