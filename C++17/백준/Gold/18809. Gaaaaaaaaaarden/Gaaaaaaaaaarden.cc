#include <iostream>
#include <queue>
#include <algorithm>
#include <vector>
using namespace std;

int n, m, g, r;
int board[52][52];
int dx[4] = {0, 0, 1, -1};
int dy[4] = {1, -1, 0, 0};
vector<pair<int, int>> cand;
int candsize;
const int EMPTY = 0;
const int GREEN = 1;
const int RED = 2;
const int FLOWER = 3;
int brute[10];

int Func()
{
    int cnt = 0;
    pair<int, int> state[52][52];

    queue<pair<int, int>> q;
    for (int i = 0; i < candsize; i++)
    {
        if (brute[i] == GREEN || brute[i] == RED)
        {
            state[cand[i].first][cand[i].second] = {0, brute[i]};
            q.push(cand[i]);
        }
    }
    while (!q.empty())
    {
        auto cur = q.front(); q.pop();
        int curtime = state[cur.first][cur.second].first;
        int curcolor = state[cur.first][cur.second].second;
        if (state[cur.first][cur.second].second == FLOWER) continue;
        for (int dir = 0; dir < 4; dir++)
        {
            int nx = cur.first + dx[dir];
            int ny = cur.second + dy[dir];
            if (nx < 0 || ny < 0 || nx >= n || ny >= m) continue;
            if (board[nx][ny] == 0) continue;
            if (state[nx][ny].second == EMPTY)
            {
                state[nx][ny] = {curtime+1, curcolor};
                q.push({nx, ny});
            }
            else if (state[nx][ny].second == RED)
            {
                if (curcolor == GREEN && state[nx][ny].first == curtime+1)
                {
                    cnt++;
                    state[nx][ny].second = FLOWER;
                }
            }
            else if (state[nx][ny].second == GREEN)
            {
                if (curcolor == RED && state[nx][ny].first == curtime+1)
                {
                    cnt++;
                    state[nx][ny].second = FLOWER;
                }
            }
        } 
    }
    return cnt;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    cin >> n >> m >> g >> r;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cin >> board[i][j];
            if (board[i][j] == 2)
                cand.push_back({i, j});
        }
    }
    candsize = cand.size();
    fill(brute+candsize-r-g, brute+candsize-r, GREEN);
    fill(brute+candsize-r, brute+candsize, RED);
    int mx = 0;
    do {
        mx = max(mx, Func());
    } while (next_permutation(brute, brute+candsize));
    cout << mx;
}