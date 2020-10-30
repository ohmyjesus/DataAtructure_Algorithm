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
//初始化一个空的单链表(带头结点)
//bool InitList(LNode* &L1) {
//	L1 = new LNode[sizeof(LNode)];		//分配一个头结点
//	L1->next = NULL;   //头结点之后还没有结点
//	return true;
//}eturn true;
//}
//
////删除指定结点p  之偷天换日   交换数据
//bool DeleteNode(LNode* p) {
//	if (p == NULL) {
//		return false;
//	}
//	LNode* q = p->next;    //指向p结点的下一个结点
//	p->data = q->data;		//交换数据
//	p->next = q->next;		//断开p与q的连接
//	delete q;				//释放内存
//	return true;
//}
//
//
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
