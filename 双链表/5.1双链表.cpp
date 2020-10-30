//
//#include <iostream>
//#include <string>
//
//using namespace std;
//
////双链表结构体的定义
//typedef struct DNode {
//	int data;
//	DNode* prior;
//	DNode* next;
//}DNode, *DLinkList;
//
////双链表的初始化 带头结点
//bool InitDLinkList(DLinkList &L) {
//	L = new DNode[sizeof(DNode)];
//	if (L == NULL) {		//内存不足，分配失败
//		return false;
//	}
//	L->prior = NULL;		//头结点的prior永远指向NULL
//	L->next = NULL;			//头结点之后暂时还没有节点
//	return true;
//}
//
////在p结点之后插入s结点
//bool InsertNextDNode(DLinkList p, DLinkList s) {
//	if (p == NULL || s == NULL) {
//		return false;
//	}
//	s->next = p->next;
//
//	if (p->next != NULL)  //处理p是尾结点时候的情况  
//		p->next->prior = s;
//	p->next = s;
//	s->prior = p;
//	return true;
//}
//
////双链表的删除操作   删除p的后继结点q
//bool DeleteNextNode(DLinkList p) {
//	if (p == NULL) {			//如果p是最后的NULL结点
//		return false;
//	}
//	DLinkList q = p->next;
//	if (q == NULL) {			//如果q是最后的NULL结点
//		return false;
//	}
//	p->next = q->next;			
//	if (q->next != NULL)		//如果p不是尾结点
//		q->next->prior = p;
//	delete q;					//释放结点空间
//	return true;
//}
//
////销毁一个双链表
//void DestoryList(DLinkList &L) {
//	//循环释放各个数据结点
//	while (L->next != NULL) {
//		DeleteNextNode(L);
//	}
//	delete L;
//	L = NULL;
//}
//
////双链表的打印  后向遍历
//void BPrintDLinkLisy(DLinkList &L) {
//	DNode* p = L->next;
//	while (p != NULL) {
//		//对结点p做相应处理， 打印操作
//		p = p->next;
//	}
//}
//
////双链表的打印  前向遍历
//void FPrintDLinkLisy(DLinkList &L) {
//	DNode* p = L;
//	while (p != NULL) {
//		p = p->next;
//	}
//	while (p != NULL) {//包括对头结点进行处理
//		//对结点p做相应处理， 打印操作
//		p = p->prior;
//	}
//	while (p->prior != NULL) {//跳过对头结点的处理
//		//对结点p做相应处理， 打印操作
//		p = p->prior;
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
