#include <iostream>
#include <queue>
#include <vector>
#include <algorithm>
using namespace std;

string board[26];
bool visited[26][26];
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
    
    queue<pair<int, int>> q;
    vector<int> answers;
    int count = 0;

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (board[i][j] == '0' || visited[i][j]) continue;
            visited[i][j] = true;
            q.push({j, i});
            count++;
            int answer = 1;
            while (!q.empty())
            {
                pair<int, int> cur = q.front();
                q.pop();
                for (int z = 0; z < 4; z++)
                {
                    int x = cur.first + dx[z];
                    int y = cur.second + dy[z];
                    if (x < 0 || y < 0 || x >= n || y >= n) continue;
                    if (visited[y][x] || board[y][x] == '0') continue;
                    visited[y][x] = true;
                    q.push({x, y});
                    answer++;
                }
            }
            answers.push_back(answer);
        }
    }
    sort(answers.begin(), answers.end());
    cout << count << '\n';
    for (int i = 0; i < answers.size(); i++)
        cout << answers[i] << '\n';
}