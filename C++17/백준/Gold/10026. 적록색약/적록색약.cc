#include <iostream>
#include <queue>
using namespace std;

string board[101];
bool visit1[101][101];
bool visit2[101][101];
int dx[4] = {0, 0, 1, -1};
int dy[4] = {1, -1, 0, 0};

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int n;
    cin >> n;

    for (int i = 0; i < n; i++)
        cin >> board[i];
    
    // 일반
    char pre = board[0][0];
    int answer1 = 0, answer2 = 0;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (visit1[i][j]) continue;
            pre = board[i][j];
            visit1[i][j] = true;
            queue<pair<int, int>> q;
            q.push({j, i});
            answer1++;
            while (!q.empty())
            {
                pair<int, int> cur = q.front(); q.pop();
                for (int z = 0; z < 4; z++)
                {
                    int x = cur.first + dx[z];
                    int y = cur.second + dy[z];
                    if (x < 0 || y < 0 || x >= n || y >= n) continue;
                    if (board[y][x] != pre || visit1[y][x]) continue;
                    visit1[y][x] = true;
                    q.push({x, y});
                }
            }
        }
    }

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (visit2[i][j]) continue;
            pre = board[i][j];
            visit2[i][j] = true;
            queue<pair<int, int>> q;
            q.push({j, i});
            answer2++;
            while (!q.empty())
            {
                pair<int, int> cur = q.front(); q.pop();
                for (int z = 0; z < 4; z++)
                {
                    int x = cur.first + dx[z];
                    int y = cur.second + dy[z];
                    if (x < 0 || y < 0 || x >= n || y >= n) continue;
                    if (visit2[y][x]) continue;
                    if (pre == 'R' || pre == 'G')
                    {
                        if (board[y][x] == 'B') continue;
                    }
                    else if (board[y][x] != pre) continue;
                    visit2[y][x] = true;
                    q.push({x, y});
                }
            }
        }
    }
    cout << answer1 << " " << answer2;
}