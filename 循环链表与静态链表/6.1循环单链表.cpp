//
//#include <iostream>
//#include <string>
//
//using namespace std;
//
////单链表结构体的定义
//typedef struct LNode {
//	int data;
//	LNode* next;
//}LNode, *LinkList;
//
////单链表的初始化 带头结点
//bool InitLinkList(LinkList &L) {
//	L = new LNode[sizeof(LNode)];
//	if (L == NULL) {		//内存不足，分配失败
//		return false;
//	}
//	L->next = L;			//头结点next指向头结点
//	return true;
//}
//
////判断循环单链表是否为空
//bool Empty(LinkList &L) {
//	if (L->next == L) {
//		return true;
//	}
//	else {
//		return false;
//	}
//}
//
////判断结点p是否为循环链表的表尾结点
//bool isTail(LinkList &L,LinkList p) {
//	if (p->next == L) {
//		return true;
//	}
//	else {
//		return false;
//	}
//}
//
//int main()
//{
//
//
//	cout << "Hello World!" << endl;
//	return 0;
//}
//
