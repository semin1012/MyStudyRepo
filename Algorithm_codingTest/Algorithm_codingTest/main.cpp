﻿#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

// 백준 2753번 : 윤년

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int year;
	cin >> year;
	if ( (year%4 == 0 && year%100 != 0) || year%400 == 0)
		cout << "1";
	else cout << "0";
}