﻿//-----------------------------------------------------------------------------
// 홀짝에 따라 다른 값 반환하기
// 
// 양의 정수 n이 매개변수로 주어질 때, n이 홀수라면 n 이하의 홀수인 모든 양의 
// 정수의 합을 return 하고 n이 짝수라면 n 이하의 짝수인 모든 양의 정수의 제곱의 
// 합을 return 하는 solution 함수를 작성해 주세요.
//-----------------------------------------------------------------------------
#include <iostream>
#include <string>
#include <vector>
#include "save.h"

using namespace std;

int solution(int n) {
    int answer = 0;
    if (n % 2 == 0) {
        while (n) {
            if (n % 2 == 0)
                answer += n * n;
            n--;
        }
    }
    else
        while (n) {
            if (n % 2 != 0)
                answer += n;
            n--;
        }
    return answer;
}

// 다른 사람 풀이
//int solution(int n) {
//    int answer = 0;
//    while (n > 0)
//    {
//        answer += n % 2 == 0 ? n * n : n;
//        n -= 2;
//    }
//    return answer;
//}