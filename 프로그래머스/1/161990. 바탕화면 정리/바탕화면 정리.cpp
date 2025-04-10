#include <string>
#include <vector>

using namespace std;

vector<int> solution(vector<string> wallpaper) {
    vector<int> answer = {100, 100, -100, -100};    

    for (int i = 0; i < wallpaper.size(); i++)
    {
        for (int j = 0; j < wallpaper[0].size(); j++)
        {
            if (wallpaper[i][j] != '#') continue;
            answer[0] = min(i, answer[0]);
            answer[1] = min(j, answer[1]);
            answer[2] = max(i + 1, answer[2]);
            answer[3] = max(j + 1, answer[3]);
        }
    }

    return answer;
}