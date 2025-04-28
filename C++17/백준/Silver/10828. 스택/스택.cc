#include <iostream>
using namespace std;

int st[10000] = {};
int cur = 0;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int n;
    string str;
    cin >> n;
    while (n-- > 0)
    {
        cin >> str;
        if (str == "push")
        {
            int num;
            cin >> num;
            st[cur++] = num;
        }
        else if (str == "pop")
        {
            if (cur > 0)
            {
                cout << st[cur-1] << '\n';
                cur--;
            }
            else cout << "-1\n";
        }
        else if (str == "size")
        {
            cout << cur << '\n';
        }
        else if (str == "empty")
        {
            if (cur == 0) cout << "1\n";
            else cout << "0\n";
        }
        else  if (str == "top")
        {
            if (cur == 0) cout << "-1\n";
            else cout << st[cur-1] << '\n';
        }
    }
}