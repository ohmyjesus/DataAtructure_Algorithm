//
//#include <iostream>
//#include <string>
//
//using namespace std;
//
////顺序栈的定义
//#define MaxSize 10		//定义栈中的最大元素个数
//typedef struct {
//	int data[MaxSize];   //静态数组存放栈中元素
//	int top;			//栈顶指针
//}SqStack;
//
//
////初始化栈
//void InitStack(SqStack &s) {
//	s.top = -1;		//-1表示此时栈中还没有任何数据
//}
//
////判断栈空
//bool EmptyStack(SqStack &s) {
//	if (s.top == -1) {
//		return true;
//	}
//	else {
//		return false;
//	}
//}
//
////进栈操作
//bool Push(SqStack &s, int data) {
//	if (s.top == MaxSize - 1) {	//栈满  报错
//		return false;
//	}
//	else {
//		s.top++;				//指针先加一
//		s.data[s.top] = data;	//新元素入栈
//		return true;			
//	}
//}
//
////出栈操作
//bool Pop(SqStack& s, int& data) {
//	if (s.top ==  - 1) {	//栈空  报错
//		return false;
//	}
//	else {
//		data = s.data[s.top];	//栈顶元素出栈  数据元素在残留在内存中，只是逻辑上被删除了
//		s.top--;				//指针减一
//		return true;
//	}
//}
//
////读取栈顶元素的操作
//bool GetTop(SqStack &s, int &x) {
//	if (s.top == -1) {
//		return false;
//	}
//	else {
//		x = s.data[s.top];
//		return true;
//	}
//} 
//
//int main()
//{
//	SqStack s;
//
//
//	cout << "Hello World!" << endl;
//	return 0;
//}
//
