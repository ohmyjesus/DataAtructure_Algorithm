//
//#include <iostream>
//#include <string>
//
//using namespace std;
//
//typedef struct LNode {
//	int data;  //������
//	struct LNode *next;  //ָ����
//}LNode, *LinkList;
//
//
////��ʼ��һ���յĵ�����(��ͷ���)
//bool InitList(LNode* &L1) {
//	L1 = new LNode[sizeof(LNode)];		//����һ��ͷ���
//	L1->next = NULL;   //ͷ���֮��û�н��
//	return true;
//}
//
////��λ���ҷ��ص�i��Ԫ�ص�ָ��  ��ͷ���
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
////��ֵ���ҷ��ص�i��Ԫ�ص�ָ��  ��ͷ���
////LNode* LocateElem(LinkList &L, int e) {
////	LNode* p;
////	p = L->next; //�ӵ�һ����㿪ʼ����
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
////���ĳ���
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
