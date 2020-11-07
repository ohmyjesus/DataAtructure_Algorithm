//
//#include <iostream>
//#include <string>
//#include <vector>
//#include <algorithm>
//
//using namespace std;
////折半插入算法  其中包含了折半查找步骤
//void BinsertSort(int A[], int n) {
//	int i, j;
//	int low, high, mid;
//	for (i = 2; i <= n; i++) {
//		A[0] = A[i];
//		low = 1;
//		high = i - 1;
//		while (low <= high) {		//倒数第二个while循环时  low,mid,high都指向一个索引位置
//			mid = (low + high) / 2;
//			if (A[mid] > A[0]){
//				high = mid - 1;
//			}
//			else {
//				low = mid + 1;
//			}
//		}
//		for (j = i - 1; j >= high + 1; j--) {
//			A[j + 1] = A[j];
//		}
//		A[high + 1] = A[0];
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
//	int a[7] = { 0,6,7,3,1,5,4 };
//	cout << "排序前： " << endl;
//	printf(a, 6);
//	BinsertSort(a, 6);
//	cout << "排序前： " << endl;
//	printf(a, 6);
//
//	cout << "Hello World!" << endl;
//	return 0;
//}
//
