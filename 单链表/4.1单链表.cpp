//#include <iostream>
//#include <string>
//
//using namespace std;
//
//typedef struct LNode {
//	int data;  //数据域
//	struct LNode *next;  //指针域
//}LNode, *LinkList;
//
////初始化一个空的单链表(不带头结点)
////bool InitList(LNode* &L) {
////	L = NULL;		//空表，暂时还没有任何结点
////	return true;
////}
//
////初始化一个空的单链表(带头结点)
//bool InitList(LNode* &L1) {
//	L1 = new LNode[sizeof(LNode)];		//分配一个头结点
//	L1->next = NULL;   //头结点之后还没有结点
//	return true;
//}
//
//int main()
//{
//	LNode* L;  //声明一个指向单链表的指针
//
//	InitList(L);
//
//	cout << "Hello World!" << endl;
//	return 0;
//}
//
