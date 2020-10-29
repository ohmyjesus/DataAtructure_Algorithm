//#include <iostream>
//#include <string>
//
//using namespace std;
//
//
//#define InitSize 10
//struct Data {
//	int data[InitSize]; //定义个静态数组
//	int length; //顺序表的当前长度
//};
//
////按位查找
//int GetElem(Data &d, int i) {
//	if (i<1 || i>d.length) {
//		return -1;
//	}
//	return d.data[i - 1];
//}
//
////按值查找
//int LocateElem(Data &d, int e) {
//	for (int j = 0; j < d.length; j++) {
//		if (d.data[j] == e) {
//			return j + 1;
//		}
//		return -1;
//	}
//}
//
//int main()
//{
//	Data d1;
//
//	cout << "Hello World!" << endl;
//	return 0;
//}
//
