#include <string>
#include <vector>
#include <algorithm>
#include <cctype> 
using namespace std;

vector<string> solution(vector<string> strArr) {
    vector<string> answer = strArr;
    for (int i = 0; i < answer.size(); i++)
    {
        if (i % 2 == 0)
            transform(answer[i].begin(), answer[i].end(), answer[i].begin(), ::tolower);
        else transform(answer[i].begin(), answer[i].end(), answer[i].begin(), ::toupper);
    }
    return answer;
}