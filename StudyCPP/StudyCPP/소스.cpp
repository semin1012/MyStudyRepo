//-----------------------------------------------------------------------------
// 문자열 겹쳐 쓰기
// 
// 문자열 my_string, overwrite_string과 정수 s가 주어집니다. 
// 문자열 my_string의 인덱스 s부터 overwrite_string의 길이만큼을 문자열 
// overwrite_string으로 바꾼 문자열을 return 하는 solution 함수를 작성해 주세요.
//-----------------------------------------------------------------------------
#include <iostream>
#include <string>
#include "save.h"

using namespace std;

string solution(string my_string, string overwrite_string, int s);

int main(void) {
    string str = "He11oWor1d";
    string str1 = "lloWorld";

    string answer = solution(str, str1, 2);
    cout << answer << endl;
    saveCpp();
}

string solution(string my_string, string overwrite_string, int s) {
    // 내 코드 
    string answer = "";
    for (int i = 0; i < my_string.length(); i++) {
        if (i < s || i > overwrite_string.length() + s - 1)
            answer += my_string[i];
        else
            answer += overwrite_string[i - s];
    }
    return answer;

    // 다른 사람 코드
    /*string answer = "";
    answer = my_string.replace(s, overwrite_string.size(), overwrite_string);
    return answer;*/
    // replace 함수를 사용하는 것 기억하기

    // 다른 사람 코드
    /*for (auto i = 0; i < overwrite_string.size(); ++i)
    {
        my_string[i + s] = overwrite_string[i];
    }
    return my_string;*/
    // answer을 사용하지 않고 그냥 my_string 자체를 변경하는 것
}