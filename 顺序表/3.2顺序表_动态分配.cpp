//#include <iostream>
//#include <string>
//using namespace std;
//
////顺序表 -- 动态分配
//#define InitSize 10
//struct Data {
//	int *data;  //指向动态分配数组的指针
//	int MaxSize;//顺序表的最大容量
//	int length; //顺序表的当前长度
//};
//
////初始化顺序表
//void InitList(Data &d) {
//	//new开辟一片连续的内存空间
//	d.data = new int[InitSize * sizeof(int)];
//	d.length = 0;
//	d.MaxSize = InitSize;
//
//}
//
////增加动态数组的长度
//void IncreaseSize(Data &d, int len) {
//	int *p = d.data;
//	d.data = new int[(d.MaxSize + len) * sizeof(int)];
//	for (int i = 0; i < d.length; i++) {
//		d.data[i] = p[i];  //将数据复制到新区域
//	}
//	d.MaxSize = d.MaxSize + len;  //增加数组的最大长度
//	delete p;  //释放内存
//}
//
//
//int main()
//{
//	Data d1;
//	InitList(d1);
//
//	IncreaseSize(d1, 5);
//	
//
//	cout << "Hello World!" << endl;
//	return 0;
//}
//
