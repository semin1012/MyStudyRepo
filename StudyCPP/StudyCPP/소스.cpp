//-----------------------------------------------------------------------------
// ���� ����Ʈ�� ���ڿ��� ��ȯ�ϱ�
// 
// ���ڵ��� ����ִ� �迭 arr�� �־����ϴ�. 
// arr�� ���ҵ��� ������� �̾� ���� ���ڿ��� return �ϴ� solution �Լ��� 
// �ۼ��� �ּ���.
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

// �ٸ� ��� Ǯ��
// #include <bits/stdc++.h>
//string solution(vector<string> arr) {
//    return accumulate(arr.begin(), arr.end(), string(""));
//}