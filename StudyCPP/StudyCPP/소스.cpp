//-----------------------------------------------------------------------------
// 영어 알파벳으로 이루어진 문자열 str이 주어집니다. 각 알파벳을 대문자는 소문자로
// 소문자는 대문자로 변환해서 출력하는 코드를 작성해 보세요.
// 
// 
// * 제한사항
//	 1 ≤ str의 길이 ≤ 20
//		str은 알파벳으로 이루어진 문자열입니다.
//-----------------------------------------------------------------------------
#include <iostream>
#include <string>
#include "save.h"

using namespace std;

int main(void) {
    string str;
    cin >> str;
    for (int i = 0; i < str.length(); i++) {
        if (isupper(str[i])) str[i] = tolower(str[i]);
        else str[i] = toupper(str[i]);
    }

    cout << str;
    saveCpp();

    // 다른 사람의 풀이 
    //for (auto c : str)
    //{
    //    if ('a' <= c && c <= 'z')
    //        c -= 'a' - 'A';
    //    else
    //        c += 'a' - 'A';
    //    cout << c;
    //}
    //return 0;

    // 
}
