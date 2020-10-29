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
////初始化一个空的单链表(不带头结点)
//bool InitList(LNode* &L) {
//	L = NULL;		//空表，暂时还没有任何结点
//	return true;
//}
//
//bool ListInsert(LinkList &L,int i,int e) {
//	if (i < 1) {
//		return false;
//	}
//	if (i == 1) {  //插入第一个结点的操作与其他结点的操作不同
//		LNode* s = new LNode[sizeof(LNode)];
//		s->data = e;
//		s->next = L;
//		L = s;		//头指针指向新结点
//		return true;
//	}
//	LNode* p;
//	int j = 1;
//	p = L;		//p指向第1个结点  注意不是头结点
//	while (p != NULL && j < i - 1) {
//		p = p->next;
//		j++;
//	}
//	if (p == NULL) {
//		return false;
//	}
//	LNode* s = new LNode[sizeof(LNode)];
//	s->data = e;
//	s->next = p->next;
//	p->next = s;
//	return true;
//}
//
//int main()
//{
//	LinkList L;
//	ListInsert(L, 3, 3);
//
//	cout << "Hello World!" << endl;
//	return 0;
//}
//
