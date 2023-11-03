//-----------------------------------------------------------------------------
// 공배수 
// 
// 점수 num 이 n 과 m 의 공배수라면 1 을 리턴한다
//-----------------------------------------------------------------------------
#include <iostream>
#include <string>
#include <vector>
#include "save.h"

using namespace std;

int solution(int number, int n, int m) {
    return number % n == 0 && number % m == 0 ? 1 : 0;
}