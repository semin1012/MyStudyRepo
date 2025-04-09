#include <iostream>
#include <queue>

using namespace std;

int solution(int n, int a, int b)
{
    int answer = 1;
    queue<int> q;

    // [실행] 버튼을 누르면 출력 값을 볼 수 있습니다.
    for (int i = 0; i < n; i++)
        q.push(i + 1);
    
    int front = -1;
    int back = -1;
    int cnt = n / 2, i = 0;

    while (q.size() > 0)
    {
        if (i >= cnt)
        {
            answer++;
            i = 0;
            cnt = cnt / 2;
        }
        front = q.front(); 
        q.pop();
        back = q.front();
        q.pop();

        if (front == a && back == b) break;
        else if (front == b && back == a) break;


        if (front == a || front == b)
            q.push(front);
        else if (back == a || back == b)
            q.push(back);
        else q.push(front);
        i++;
    }

    return answer;
}