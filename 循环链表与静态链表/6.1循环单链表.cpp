//
//#include <iostream>
//#include <string>
//
//using namespace std;
//
////������ṹ��Ķ���
//typedef struct LNode {
//	int data;
//	LNode* next;
//}LNode, *LinkList;
//
////������ĳ�ʼ�� ��ͷ���
//bool InitLinkList(LinkList &L) {
//	L = new LNode[sizeof(LNode)];
//	if (L == NULL) {		//�ڴ治�㣬����ʧ��
//		return false;
//	}
//	L->next = L;			//ͷ���nextָ��ͷ���
//	return true;
//}
//
////�ж�ѭ���������Ƿ�Ϊ��
//bool Empty(LinkList &L) {
//	if (L->next == L) {
//		return true;
//	}
//	else {
//		return false;
//	}
//}
//
////�жϽ��p�Ƿ�Ϊѭ������ı�β���
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
