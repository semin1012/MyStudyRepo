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
    for (int i = 0; i < str.length(); i++) cout << str[i] << endl;
    saveCpp();



    // �ٸ� ��� Ǯ��
    /*string str;
    cin >> str;
    for (char ch : str)
        cout << (char)ch << endl;
    return 0;*/
}
