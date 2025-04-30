#include <iostream>
using namespace std;


int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int n;
    string str;
    int q[10000] = {};
    int head = 0, tail = 0;
    cin >> n;

    while (n-- > 0)
    {
        cin >> str;
        if (str == "push")
        {
            int num;
            cin >> num;
            q[tail++] = num;
        }
        else if (str == "pop")
        {
            if (head == tail)
                cout << "-1" << '\n';
            else cout << q[head++] << '\n';
        }
        else if (str == "size")
            cout << tail - head << '\n';
        else if (str == "empty")
        {
            if (head == tail)
                cout << "1\n";
            else cout << "0\n";
        }
        else if (str == "front")
        {
            if (head == tail) cout << "-1\n";
            else cout << q[head] << "\n";
        }
        else if (str == "back")
        {
            if (head==tail) cout << "-1\n";
            else cout << q[tail-1] <<'\n';
        }
    }
}