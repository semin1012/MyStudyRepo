//-----------------------------------------------------------------------------
// n의 배수
// 
// 점수 num 이 n 의 배수라면 1 을 리턴하고, 아니라면 0 을 리턴하도록 
//-----------------------------------------------------------------------------
#include <iostream>
#include <string>
#include <vector>
#include "save.h"

using namespace std;

int solution(int num, int n) {
    int answer = 0;
    if (num % n == 0) answer = 1;
    else answer = 0;
    return answer;
}


// 다른 사람 풀이
//int solution(int num, int n) {
//    return num % n == 0 ? 1 : 0;
//}