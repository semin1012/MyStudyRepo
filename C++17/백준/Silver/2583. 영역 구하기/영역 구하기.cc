#include <iostream>
#include <queue>
#include <algorithm>
#include <vector>
using namespace std;

int board[101][101];
bool visited[101][101];
int dx[4] = { 0, 0, 1, -1 };
int dy[4] = { 1, -1, 0, 0 };

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    
    int m, n, k;
    cin >> m >> n >> k;
    while (k--)
    {
        int x1, y1, x2, y2;
        cin >> x1 >> y1 >> x2 >> y2;
        for (int i = y1; i < y2; i++)
        {
            for (int j = x1; j < x2; j++)
                board[i][j] = 1;
        }
    }

    int area = 0;
    vector<int> answers;

    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (board[i][j] == 1 || visited[i][j]) continue;
            visited[i][j] = true;
            queue<pair<int, int>> q;
            q.push({j, i});
            area++;
            int answer = 1;
            while (!q.empty())
            {
                pair<int, int> cur = q.front();
                q.pop();
                for (int z = 0; z < 4; z++)
                {
                    int x = cur.first + dx[z];
                    int y = cur.second + dy[z];
                    if (x < 0 || y < 0 || x >= n || y >= m) continue;
                    if (board[y][x] == 1 || visited[y][x]) continue;
                    visited[y][x] = true;
                    q.push({x, y});
                    answer++;
                }
            }
            answers.push_back(answer);
        }
    }
    sort(answers.begin(), answers.end());
    cout << area << '\n';
    for (int i = 0; i < answers.size(); i++)
        cout << answers[i] << " ";
}