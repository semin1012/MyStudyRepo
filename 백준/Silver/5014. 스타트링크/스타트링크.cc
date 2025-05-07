#include <iostream>
#include <queue>
using namespace std;

int visited[1'000'002];

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int f, s, g, u, d;
    cin >> f >> s >> g >> u >> d;
    fill(visited, visited + f + 1, -1);

    if (s == g) {
        cout << 0;
        return 0;
    }
    queue<int> q;
    q.push(s);
    visited[s] = 0;

    while (!q.empty())
    {
        int cur = q.front();
        q.pop();
        for (int a : { u, -d })
        {
            int next = cur + a;
            if (next < 1 || next > f) continue;
            if (visited[next] >= 0) continue;
            visited[next] = visited[cur] + 1;
            if (next == g)
            {
                cout << visited[next];
                return 0;
            }
            q.push(next);
        }
    }
    cout << "use the stairs";
}