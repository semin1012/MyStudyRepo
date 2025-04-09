#include <string>
#include <vector>
#include <sstream>
#include <iostream>
using namespace std;

int solution(string s) {
    int answer = 0;
    stringstream str(s);
    string word;
    int pre = 0;
    while (str >> word)
    {
        if (word == "Z") 
            answer -= pre;
        else
        {
            int num = stoi(word);
            answer += num;
            pre = num;
        }
    }

    return answer;
}