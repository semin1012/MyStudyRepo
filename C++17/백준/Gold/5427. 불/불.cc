#include <iostream>
#include <queue>
using namespace std;

string board[1001];
int dist[1001][1001];
int fireDist[1001][1001];
int dx[4] = {0, 0, 1, -1};
int dy[4] = {1, -1, 0, 0};
int w, h;
queue<pair<int, int>> q;

void BFS()
{
    while (!q.empty())
    {
        pair<int, int> cur = q.front();
        q.pop();
        for (int i = 0; i < 4; i++)
        {
            int x = cur.first + dx[i];
            int y = cur.second + dy[i]; 
            if (x < 0 || y < 0 || x >= w || y >= h)
            {
                cout << dist[cur.second][cur.first] + 1 << '\n';
                return;
            }
            if (dist[y][x] >= 0 || board[y][x] == '#') continue;
            if (fireDist[y][x] != -1 && dist[cur.second][cur.first] + 1 >= fireDist[y][x]) continue;
            dist[y][x] = dist[cur.second][cur.first] + 1;
            q.push({x, y});
        }
    }
    cout << "IMPOSSIBLE\n";
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int n;
    cin >> n;
    while (n--)
    {
        cin >> w >> h;
        for (int i = 0; i < h; i++)
        {
            fill(dist[i], dist[i]+w, -1);
            fill(fireDist[i], fireDist[i]+w, -1);
            cin >> board[i];
        }
        q = queue<pair<int, int>>();
        queue<pair<int, int>> fireQ;
        for (int i = 0; i < h; i++)
        {
            for (int j = 0; j < w; j++)
            {
                if (board[i][j] == '@') 
                {
                    q.push({j, i});
                    dist[i][j] = 0;
                }
                if (board[i][j] == '*')
                {
                    fireQ.push({j, i});
                    fireDist[i][j] = 0;
                }
            }
        }
        
        while (!fireQ.empty())
        {
            pair<int, int> cur = fireQ.front();
            fireQ.pop();
            for (int i = 0; i < 4; i++)
            {
                int x = cur.first + dx[i];
                int y = cur.second + dy[i]; 
                if (x < 0 || y < 0 || x >= w || y >= h) continue;
                if (fireDist[y][x] >= 0 || board[y][x] == '#') continue;
                fireDist[y][x] = fireDist[cur.second][cur.first] + 1;
                fireQ.push({x, y});
            }
        }
        BFS();
    }

}