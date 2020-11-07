//
//#include <iostream>
//#include <string>
//#include <vector>
//#include <algorithm>
//
//using namespace std;
//
//void printf(int a[], int n);
//void quicksort(int data[], int n);
//void sort(int data[], int start, int end);
//void swap(int data[], int i, int j);
//
//int main()
//{
//    int data[] = {9, -16, 30, 23, -30, -49, 25, 21, 30};
//    cout << "交换前：" << endl;
//    printf(data,9);
//    quicksort(data,9);
//    cout << "交换后：" << endl;
//    printf(data, 9);
//
//
//	cout << "Hello World!" << endl;
//	return 0;
//}
//
//void printf(int a[], int n) {
//    for (int i = 0; i < n; i++) {
//        cout << a[i] << " ";
//    }
//    cout << endl;
//}
//
//void quicksort(int data[], int n) {
//    sort(data, 0, n - 1);
//}
//
////start和end分别指向头尾索引  指向的位置不变 
////low和high相当于指针移动  分别和base做比较
//void sort(int data[], int start, int end)
//{
//    if (start < end) {
//        int base = start;
//        int low = start;
//        int high = end + 1;
//        while (true)
//        {
//            while (low < end && data[++low] <= data[base]); //比base大则跳出
//            
//            while (high > start && data[--high] >= data[base]);//比base小则跳出
//
//            if (low < high) {
//                swap(data, low, high);
//            }
//            else
//            {
//                break;
//            }
//        }
//        swap(data, start, high);
//        sort(data, start, high - 1); //递归调用
//        sort(data, high + 1, end);
//    }
//}
//
//void swap(int data[], int i, int j)
//{
//    int temp = data[i];
//    data[i] = data[j];
//    data[j] = temp;
//}