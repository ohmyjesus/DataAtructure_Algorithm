//
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
//
////初始化一个空的单链表(带头结点)
//bool InitList(LNode* &L1) {
//	L1 = new LNode[sizeof(LNode)];		//分配一个头结点
//	L1->next = NULL;   //头结点之后还没有结点
//	return true;
//}
//
////按位查找返回第i个元素的指针  带头结点
////LNode* GetElem(LinkList &L, int i) {
////	if (i < 0) {
////		return NULL;
////	}
////	LNode* p;
////	p = L;
////	int j = 0;
////	while (p != NULL && j < i) {
////		p = p->next;
////		j++;
////	}
////	if (p == NULL) {
////		return NULL;
////	}
////	return p;
////}
//
////按值查找返回第i个元素的指针  带头结点
////LNode* LocateElem(LinkList &L, int e) {
////	LNode* p;
////	p = L->next; //从第一个结点开始查找
////	while (p!=NULL) {
////		if (p->data == e) {
////			return p;
////		}
////		else {
////			p = p->next;
////		}
////	}
////}
//
////求表的长度
//int length(LinkList &L) {
//	int len = 0;
//	LNode* p;
//	p = L;
//	while (p!=NULL) {
//		len++;
//		p = p->next;
//	}
//	return len;
//}
//
//int main()
//{
//	LinkList L;
//	InitList(L);
//	//GetElem(L, 3);
//
//	cout << "Hello World!" << endl;
//	return 0;
//}
//
