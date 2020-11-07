//
//#include <iostream>
//#include <string>
//#include <vector>
//#include <algorithm>
//
//using namespace std;
//
//void InsertSort(int A[], int n) {
//	int i, j;
//	for (int i = 2; i <= n; i++) {
//		A[0] = A[i];		//A[0]作为哨兵
//		for (j = i - 1; A[0] < A[j]; j--) {		
//			A[j + 1] = A[j];
//		}
//		A[j + 1] = A[0];
//	}
//}
//
//void printf(int A[], int n) {
//	for (int i = 1; i <= n; i++) {
//		cout << A[i] << " ";
//	}
//	cout << endl;
//}
//int main()
//{
//	int a[7] = { 0,6,7,3,1,5,4 };
//	cout << "排序前： " << endl;
//	printf(a, 6);
//	InsertSort(a, 6);
//	cout << "排序前： " << endl;
//	printf(a, 6);
//
//	cout << "Hello World!" << endl;
//	return 0;
//}
//
