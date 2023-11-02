//-----------------------------------------------------------------------------
// 문자 리스트를 문자열로 변환하기
// 
// 문자들이 담겨있는 배열 arr가 주어집니다. 
// arr의 원소들을 순서대로 이어 붙인 문자열을 return 하는 solution 함수를 
// 작성해 주세요.
//-----------------------------------------------------------------------------
#include <iostream>
#include <string>
#include <vector>
#include "save.h"

using namespace std;

string solution(vector<string> arr);

int main(void) {
    vector<string> str;
    str.push_back("a");
    str.push_back("b");
    str.push_back("c");
    string answer = solution(str);
    cout << answer << endl;
    //saveCpp();
}

string solution(vector<string> arr) {
    string answer = "";
    for (int i = 0; i < arr.size(); i++) {
        answer += arr[i];
    }
    return answer;
}

// 다른 사람 풀이
// #include <bits/stdc++.h>
//string solution(vector<string> arr) {
//    return accumulate(arr.begin(), arr.end(), string(""));
//}