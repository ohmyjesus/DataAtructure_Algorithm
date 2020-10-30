//
//#include <iostream>
//#include <string>
//
//using namespace std;
////循环双链表
//typedef struct DNode {
//	int data;
//	DNode* prior;
//	DNode* next;
//}DNode, *DLinkList;
//
////初始化空的循环双链表
//bool InitDLinkList(DLinkList &L) {
//	L = new DNode[sizeof(DNode)];	//分配一个头结点	
//	if (L == NULL) {
//		return false;		//内存不足 分配失败	
//	}
//	L->next = L;			//头结点的prior指向头结点
//	L->prior = L;			//头结点的next指向头结点
//	return true;
//}
//
////判断循环链表是否为空
//bool isEmpty(DLinkList &L){
//	if (L->next == L)
//	{
//		return true;
//	}
//	else {
//		return false;
//	}
//}
//
////判断结点p是否为循环双链表的表尾结点
//bool isTail(DLinkList &L, DLinkList &p) {
//	if (p->next == L)
//	{
//		return true;
//	}
//	else {
//		return false;
//	}
//}
//
//int main()
//{
//	DLinkList L;
//	InitDLinkList(L);
//
//	cout << "Hello World!" << endl;
//	return 0;
//}
//
