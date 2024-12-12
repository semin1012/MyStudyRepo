#include <iostream>
#include <vector>
using namespace std;

vector<int> nums;
vector<int> temp;

void MergeSort(int start, int end)
{
	if (end - start < 1)
		return;
	int middle = start + (end - start) / 2;
	MergeSort(start, middle);
	MergeSort(middle + 1, end);
	for (int i = start; i <= end; i++)
		temp[i] = nums[i];

	int k = start;
	int idx1 = start, idx2 = middle + 1;
	while (idx1 <= middle && idx2 <= end)
	{
		if (temp[idx1] < temp[idx2])
			nums[k++] = temp[idx1++];
		else nums[k++] = temp[idx2++];
	}
	while (idx1 <= middle)
		nums[k++] = temp[idx1++];
	while (idx2 <= end)
		nums[k++] = temp[idx2++];
}

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	int n;
	cin >> n;
	nums.resize(n);
	temp.resize(n);

	for (int i = 0; i < n; i++)
		cin >> nums[i];

	MergeSort(0, n - 1);

	for (int i = 0; i < n; i++)
		cout << nums[i] << "\n";
}