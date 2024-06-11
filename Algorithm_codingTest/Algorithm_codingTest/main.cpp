#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

// 백준 2752번 : 세수정렬

int main()
{
	ios::sync_with_stdio(false);
	cout.tie(NULL);
	cin.tie(NULL);
	vector<int> nums(3,0);
	for ( int i = 0; i < 3; i++ )
		cin >> nums[i];
	sort(nums.begin(), nums.end());
	for ( int i = 0 ; i < 3; i++ )
		cout << nums[i] << " ";
}