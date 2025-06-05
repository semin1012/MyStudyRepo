#include <iostream>
#include <string>
#include <climits>
using namespace std;

int maxnum, minnum = INT_MAX;
int odd;

int Check(string temp)
{
    int sum = 0;
    for (int i = 0; i < temp.length(); i++)
    {   
        int num = temp[i] - '0';
        if (num % 2 != 0) sum++;
    }
    return sum;
}

void Func(string temp, int total)
{
    if (temp.size() == 1)
    {
        total += Check(temp);
        if (total > maxnum) maxnum = total;
        if (total < minnum) minnum = total;
        return;
    }
    else if (temp.size() == 2)
    {
        total += Check(temp);
        int tnum = 0;
        for (int i = 0; i < temp.size(); i++)
            tnum += temp[i] - '0';
        Func(to_string(tnum), total);
    }
    else 
    {
        total += Check(temp);
        for (int i = 1; i < temp.size() - 1; i++)
        {
            string first, second, third;
            for (int j = i + 1; j < temp.size(); j++)
            {
                first = temp.substr(0, i);
                second = temp.substr(i, j - i);
                third = temp.substr(j, temp.length() - j);
                int tnum = stoi(first) + stoi(second) + stoi(third);
                Func(to_string(tnum), total);
            }
        }
    }
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    string n;
    string answer;
    cin >> n;
    Func(n, 0);
    cout << minnum << ' ' << maxnum;
}