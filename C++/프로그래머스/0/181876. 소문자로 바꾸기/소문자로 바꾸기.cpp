#include <string>
#include <vector>
#include <algorithm>
using namespace std;

string solution(string myString) {
    string answer = "";
    
    answer = myString;
    for (int i = 0; i < answer.length(); i++)
        answer[i] = tolower(answer[i]);
    
    return answer;
}