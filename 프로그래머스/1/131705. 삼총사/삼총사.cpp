#include <string>
#include <vector>

using namespace std;

int solution(vector<int> number) {
    int answer = 0;
    for (int i = 0; i < number.size(); i++)
    {
        for (int j = i; j < number.size(); j++)
        {
            for (int z = j; z < number.size(); z++)
            {
                if (number[i] + number[j] + number[z] == 0)
                {
                    if (i != j && j != z)
                        answer++;
                }
            }
        }
    }
    return answer;
}