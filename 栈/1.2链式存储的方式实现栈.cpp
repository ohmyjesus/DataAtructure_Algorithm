//
//#include <iostream>
//#include <string>
//
//using namespace std;
//
//typedef struct Linknode {
//	int data;
//	Linknode* next;
//} *LiStack;
//
//////初始化栈  带头结点的
//void InitStack(LiStack &L) {
//	L = new Linknode[sizeof(Linknode)];
//	L = NULL;		//NULL表示此时栈中还没有任何数据
//}
//
// //链表的进栈  对头结点使用尾插法
//bool PushStack(LiStack &L, int x) {
//	Linknode* s;
//	s = new Linknode[sizeof(Linknode)];
//	if (s == NULL) {
//		return false; //内存不足 分配失败
//	}
//	s->next = L->next;
//	s->data = x;
//	L->next = s;
//}
//
////链栈的出栈  对头结点使用后删除操作
//bool PopStack(LiStack &L, int &x) {
//	if (L->next == NULL) {
//		return false;
//	}
//	Linknode* p = L->next;
//	L->next = p->next;
//	delete p;
//	return true;
//
//}
//
//int main()
//{
//	LiStack L;
//
//	cout << "Hello World!" << endl;
//	return 0;
//}
//
