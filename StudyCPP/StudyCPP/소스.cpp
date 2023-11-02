//-----------------------------------------------------------------------------
// 더 크게 합치기
// 
// 연산 ⊕는 두 정수에 대한 연산으로 두 정수를 붙여서 쓴 값을 반환합니다. 
//-----------------------------------------------------------------------------
#include <iostream>
#include <string>
#include <vector>
#include "save.h"

using namespace std;

int solution(int a, int b);

int main(void) {
    int a = 9;
    int b = 91;
    cout << solution(a, b) << endl;

    //saveCpp();
}

int solution(int a, int b) {
    int answer = 0;
    string sa = to_string(a);
    string sb = to_string(b);

    if (sa + sb > sb + sa) answer = stoi(sa + sb);
    else answer = stoi(sb + sa);
    return answer;
}

