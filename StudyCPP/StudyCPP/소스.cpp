//-----------------------------------------------------------------------------
// 조건 문자열
// 
// 두 문자열 ineq와 eq가 주어집니다. ineq는 "<"와 ">"중 하나고, 
// eq는 "="와 "!"중 하나입니다.
//-----------------------------------------------------------------------------
#include <iostream>
#include <string>
#include <vector>
#include "save.h"

using namespace std;

int solution(string ineq, string eq, int n, int m) {
    int answer = 0;
    if (ineq == "<") {
        if (eq == "=") {
            return n <= m;
        }
        else return n < m;
    }
    else {
        if (eq == "=")
            return n >= m;
        else return n > m;
    }
    return answer;
}