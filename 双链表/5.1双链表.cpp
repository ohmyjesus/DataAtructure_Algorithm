//
//#include <iostream>
//#include <string>
//
//using namespace std;
//
////˫����ṹ��Ķ���
//typedef struct DNode {
//	int data;
//	DNode* prior;
//	DNode* next;
//}DNode, *DLinkList;
//
////˫����ĳ�ʼ�� ��ͷ���
//bool InitDLinkList(DLinkList &L) {
//	L = new DNode[sizeof(DNode)];
//	if (L == NULL) {		//�ڴ治�㣬����ʧ��
//		return false;
//	}
//	L->prior = NULL;		//ͷ����prior��Զָ��NULL
//	L->next = NULL;			//ͷ���֮����ʱ��û�нڵ�
//	return true;
//}
//
////��p���֮�����s���
//bool InsertNextDNode(DLinkList p, DLinkList s) {
//	if (p == NULL || s == NULL) {
//		return false;
//	}
//	s->next = p->next;
//
//	if (p->next != NULL)  //����p��β���ʱ������  
//		p->next->prior = s;
//	p->next = s;
//	s->prior = p;
//	return true;
//}
//
////˫�����ɾ������   ɾ��p�ĺ�̽��q
//bool DeleteNextNode(DLinkList p) {
//	if (p == NULL) {			//���p������NULL���
//		return false;
//	}
//	DLinkList q = p->next;
//	if (q == NULL) {			//���q������NULL���
//		return false;
//	}
//	p->next = q->next;			
//	if (q->next != NULL)		//���p����β���
//		q->next->prior = p;
//	delete q;					//�ͷŽ��ռ�
//	return true;
//}
//
////����һ��˫����
//void DestoryList(DLinkList &L) {
//	//ѭ���ͷŸ������ݽ��
//	while (L->next != NULL) {
//		DeleteNextNode(L);
//	}
//	delete L;
//	L = NULL;
//}
//
////˫����Ĵ�ӡ  �������
//void BPrintDLinkLisy(DLinkList &L) {
//	DNode* p = L->next;
//	while (p != NULL) {
//		//�Խ��p����Ӧ���� ��ӡ����
//		p = p->next;
//	}
//}
//
////˫����Ĵ�ӡ  ǰ�����
//void FPrintDLinkLisy(DLinkList &L) {
//	DNode* p = L;
//	while (p != NULL) {
//		p = p->next;
//	}
//	while (p != NULL) {//������ͷ�����д���
//		//�Խ��p����Ӧ���� ��ӡ����
//		p = p->prior;
//	}
//	while (p->prior != NULL) {//������ͷ���Ĵ���
//		//�Խ��p����Ӧ���� ��ӡ����
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
