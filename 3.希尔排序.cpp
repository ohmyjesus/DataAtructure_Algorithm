//
//#include <iostream>
//#include <string>
//#include <vector>
//#include <algorithm>
//
//using namespace std;
////Ï£¶ûÅÅÐò
//void shellSort(int A[], int n) {
//	int i, j;
//	for (int dk = n / 2; dk >= 1; dk = dk / 2) {
//		for (i = dk + 1; i <= n; ++i) {
//			if (A[i] < A[i - dk]) {
//				A[0] = A[i];		//A[0]×÷ÎªÉÚ±ø
//				for (j = i - dk; j > 0 && A[0] < A[j]; j -= dk) {
//					A[j + dk] = A[j];
//				}
//				A[j + dk] = A[0];
//			}
//		}
//	}
//}
//
//void printf(int A[], int n) {
//	for (int i = 1; i <= n; i++) {
//		cout << A[i] << " ";
//	}
//	cout << endl;
//}
//
//int main()
//{
//	int a[8] = { 0,3,6,5,2,5,1,4 };
//	cout << "ÅÅÐòÇ°£º " << endl;
//	printf(a, 7);
//	shellSort(a, 7);
//	cout << "ÅÅÐòÇ°£º " << endl;
//	printf(a, 7);
//	cout << "Hello World!" << endl;
//	return 0;
//}
//
