#include <iostream>
#include <queue>
using namespace std;

int dx[8] = {1, 2, 2, 1, -1, -2, -2, -1};
int dy[8] = {2, 1, -1, -2, -2, -1, 1, 2};
int dist[300][300];

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        int len;
        cin >> len;
        for (int j = 0; j < len; j++)
            fill(dist[j], dist[j]+len, -1);

        pair<int, int> orig;
        pair<int, int> dest;
        cin >> orig.first >> orig.second;
        cin >> dest.first >> dest.second;

        queue<pair<int, int>> q;
        q.push({orig.first, orig.second});
        dist[orig.second][orig.first] = 0;
        
        while (!q.empty())
        {
            pair<int, int> cur = q.front();
            q.pop();
            if (cur.first == dest.first && cur.second == dest.second) break;
            for (int i = 0; i < 8; i++)
            {
                int x = cur.first + dx[i];
                int y = cur.second + dy[i];
                if (x < 0 || y < 0 || x >= len || y >= len) continue;
                if (dist[y][x] >= 0) continue;
                dist[y][x] = dist[cur.second][cur.first] + 1;
                q.push({x, y});
            }
        }
        cout << dist[dest.second][dest.first] << '\n';
    }
}