//-----------------------------------------------------------------------------
// ���ڿ� ���� ����
// 
// ���ڿ� my_string, overwrite_string�� ���� s�� �־����ϴ�. 
// ���ڿ� my_string�� �ε��� s���� overwrite_string�� ���̸�ŭ�� ���ڿ� 
// overwrite_string���� �ٲ� ���ڿ��� return �ϴ� solution �Լ��� �ۼ��� �ּ���.
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
    // �� �ڵ� 
    string answer = "";
    for (int i = 0; i < my_string.length(); i++) {
        if (i < s || i > overwrite_string.length() + s - 1)
            answer += my_string[i];
        else
            answer += overwrite_string[i - s];
    }
    return answer;

    // �ٸ� ��� �ڵ�
    /*string answer = "";
    answer = my_string.replace(s, overwrite_string.size(), overwrite_string);
    return answer;*/
    // replace �Լ��� ����ϴ� �� ����ϱ�

    // �ٸ� ��� �ڵ�
    /*for (auto i = 0; i < overwrite_string.size(); ++i)
    {
        my_string[i + s] = overwrite_string[i];
    }
    return my_string;*/
    // answer�� ������� �ʰ� �׳� my_string ��ü�� �����ϴ� ��
}