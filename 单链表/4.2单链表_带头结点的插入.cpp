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
//////初始化一个空的单链表(带头结点)
//bool InitList(LNode* &L1) {
//	L1 = new LNode[sizeof(LNode)];		//分配一个头结点
//	L1->next = NULL;   //头结点之后还没有结点
//	return true;
//}
//
////在第i个位置插入元素e(带头结点)
//bool ListInsert(LinkList &L, int i, int e) {
//	//1.找到结点
//	if (i < 1) {
//		return false;
//	}
//	LNode* p;
//	int j = 0;	 //j表示当前P指的是第几个结点
//	p = L;		 //L指向头结点，头结点是第0个结点(不存放数据)
//	while (p != NULL && j < i - 1) {
//		p = p->next;
//		j++;
//	}
//	if (p == NULL) {//i值不合法
//		return false; 
//	}
//	//2.插入结点
//	LNode* s = new LNode[sizeof(LNode)];
//	s->data = e;
//	s->next = p->next;  //这句和下局顺序不能颠倒
//	p->next = s;
//	return true; //插入成功
//
//}
//
//
//
//int main()
//{
//	LinkList L;
//
//	cout << "Hello World!" << endl;
//	return 0;
//}
//
