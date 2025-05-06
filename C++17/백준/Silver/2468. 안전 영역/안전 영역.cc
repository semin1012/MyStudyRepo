#include <iostream>
#include <queue>
using namespace std;

int board[101][101];
bool visited[101][101];
int dx[4] = {0, 0, 1, -1};
int dy[4] = {1, -1, 0, 0};
int n, height = 0;

int BFS()
{
    int count = 0;
    queue<pair<int, int>> q;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (visited[i][j] || board[i][j] <= height) continue;
            visited[i][j] = true;
            q.push({j, i});
            count++;
            while (!q.empty())
            {
                pair<int, int> cur = q.front();
                q.pop();
                for (int z = 0; z < 4; z++)
                {
                    int x = cur.first + dx[z];
                    int y = cur.second + dy[z];
                    if (x < 0 || y < 0 || x >= n || y >= n) continue;
                    if (board[y][x] <= height || visited[y][x]) continue;
                    visited[y][x] = true;
                    q.push({x, y});
                }
            }
        }
    }
    return count;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    cin >> n;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cin >> board[i][j];
            if (board[i][j] > height) height = board[i][j];
        }
    }
    
    int max = 0;
    while (height--)
    {
        int temp = BFS(); 
        if (max < temp) max = temp;
        for (int i = 0; i < n; i++) 
            fill(visited[i], visited[i] + n, false);
    }
    cout << max;
}   