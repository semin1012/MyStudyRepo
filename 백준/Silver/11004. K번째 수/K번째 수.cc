#include <iostream>
#include <vector>
using namespace std;

int n, k;
int nums[5000001];

void Swap(int arr[], int i, int j)
{
	int temp = arr[i];
	arr[i] = arr[j];
	arr[j] = temp;
}

int Partition(int arr[], int start, int end)
{
	if (start + 1 == end)
	{
		if (arr[start] > arr[end])
			Swap(arr, start, end);
		return end;
	}
	int middle = (start + end) / 2;
	Swap(arr, middle, start);
	int pivot = arr[start];
	int i = start + 1, j = end;
	while (i <= j)
	{
		while (j >= start + 1 && arr[j] > pivot) j--;
		while (i <= end && arr[i] < pivot) i++;
		if (i < j)
			Swap(arr, i++, j--);
		else break;
	}
	arr[start] = arr[j];
	arr[j] = pivot;
	return j;
}

void QuickSort(int arr[], int start, int end)
{
	int pivot = Partition(arr, start, end);
	if (pivot == k)
		return;
	if (k < pivot)
		QuickSort(arr, start, pivot - 1);
	else
		QuickSort(arr, pivot + 1, end);
}

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	cin >> n >> k;
	k -= 1;
	for (int i = 0; i < n; i++)
		cin >> nums[i];

	QuickSort(nums, 0, n - 1);

	cout << nums[k];
}