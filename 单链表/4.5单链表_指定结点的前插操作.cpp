//#include <iostream>
//#include <string>
//
//using namespace std;
//
//typedef struct LNode {
//	int data;  //数据域
//	LNode* next;  //指针域
//}LNode, *LinkList;
//
////初始化一个空的单链表(不带头结点)
//bool InitList(LNode* &L) {
//	L = NULL;		//空表，暂时还没有任何结点
//	return true;
//}
//
////前插操作： 在p结点之前插入元素e
//bool InsertPriorNode(LNode *p, int e) {
//	if (p == NULL) {
//		return false;
//	}
//	LNode* s = new LNode[sizeof(LNode)];
//	s->next = p->next;
//	p->next = s;
//	s->data = p->data;  //将p中元素复制到s中
//	p->data = e;		//p中元素覆盖为e
//
//	return true;
//}
//
//
//int main()
//{
//
//
//	cout << "Hello World!" << endl;
//	return 0;
//}
//
