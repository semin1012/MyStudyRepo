#include <iostream>
#include <queue>
#include <algorithm>
using namespace std;

bool mask[25];
string board[5];
int dx[4] = {0, 0, 1, -1};
int dy[4] = {1, -1, 0, 0};
int ans = 0;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    for (int i = 0; i < 5; i++)
        cin >> board[i];
    fill(mask + 7, mask + 25, true);
    do {
        queue<pair<int, int>> q;
        int dasom = 0, num = 0;
        bool tmp[5][5] = {}, visited[5][5] = {};
        for (int i = 0; i < 25; i++)
        {
            if (!mask[i]) 
            {
                int x = i / 5, y = i % 5;
                tmp[x][y] = true;
                if (q.empty())
                {
                    q.push({x, y});
                    visited[x][y] = true;
                }
            }
        }
        while (!q.empty())
        {
            int x, y;
            tie(x, y) = q.front();
            q.pop();
            num++;
            dasom += (board[x][y] == 'S');
            for (int k = 0; k < 4; k++)
            {
                int nx = x + dx[k];
                int ny = y + dy[k];
                if (nx < 0 || nx >= 5 || ny < 0 || ny >= 5) continue;
                if (visited[nx][ny] || !tmp[nx][ny]) continue;
                q.push({nx, ny});
                visited[nx][ny] = true;
            }
        }
        ans += (num >= 7 && dasom >= 4);
    } while (next_permutation(mask, mask + 25));
    cout << ans;
}