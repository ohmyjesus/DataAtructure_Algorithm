
#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;
//合并两个有序线性表
Elemtype* b = new int[sizeof(Elemtype) + 1];
void Merge(Elemtype a[], int low, int mid, int high) {
	int i, j, k;
	for (int k = low; k <= high; k++) {
		b[k] = a[k];
	}
	for (i = low, j = mid + 1, k = i; i <= mid && j <= high; k++) {
		if (b[i] <= b[k])
			a[k] = b[i++];
		else
			a[k] = b[j++];
	}
	while (i <= mid)
		a[k++] = b[i++];
	while (j <= high)
		a[k++] = b[j++];
}

void MergeSort(Elemtype a[], int low, int high) {
	if (low < high) {
		int mid = (low + high) / 2;
		MergeSort(a, low, mid);
		MergeSort(a, mid+1, high);
		Merge(a, low, mid, high);
	}
}

int main()
{


	cout << "Hello World!" << endl;
	return 0;
}

