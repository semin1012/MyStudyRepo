//-----------------------------------------------------------------------------
// ���� ���ĺ����� �̷���� ���ڿ� str�� �־����ϴ�. �� ���ĺ��� �빮�ڴ� �ҹ��ڷ�
// �ҹ��ڴ� �빮�ڷ� ��ȯ�ؼ� ����ϴ� �ڵ带 �ۼ��� ������.
// 
// 
// * ���ѻ���
//	 1 �� str�� ���� �� 20
//		str�� ���ĺ����� �̷���� ���ڿ��Դϴ�.
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

    // �ٸ� ����� Ǯ�� 
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
