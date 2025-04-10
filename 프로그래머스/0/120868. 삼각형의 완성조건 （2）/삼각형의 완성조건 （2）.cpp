#include <string>
#include <vector>
#include <iostream>

using namespace std;

int solution(vector<int> sides) {
    int answer = 0;

    if (sides[0] > sides[1])
    {
        int temp = sides[0];
        sides[0] = sides[1];
        sides[1] = temp;
    }

    answer += sides[1] - (sides[1] - sides[0]);
    answer += (sides[1] + sides[0]) - sides[1] - 1;

    return answer;
}