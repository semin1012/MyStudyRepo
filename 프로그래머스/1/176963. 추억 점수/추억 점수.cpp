#include <string>
#include <vector>

using namespace std;

vector<int> solution(vector<string> name, vector<int> yearning, vector<vector<string>> photo) {
    vector<int> answer;
    for (int i = 0; i < photo.size(); i++)
    {
        int sum = 0;
        for (int j = 0; j < photo[i].size(); j++)
        {
            for (int z = 0; z < name.size(); z++)
            {
                if (name[z] == photo[i][j])
                {
                    sum += yearning[z];
                    break;
                }
            }
        }
        answer.push_back(sum);
    }
    return answer;
}