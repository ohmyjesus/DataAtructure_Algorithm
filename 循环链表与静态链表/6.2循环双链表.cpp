//
//#include <iostream>
//#include <string>
//
//using namespace std;
////ѭ��˫����
//typedef struct DNode {
//	int data;
//	DNode* prior;
//	DNode* next;
//}DNode, *DLinkList;
//
////��ʼ���յ�ѭ��˫����
//bool InitDLinkList(DLinkList &L) {
//	L = new DNode[sizeof(DNode)];	//����һ��ͷ���	
//	if (L == NULL) {
//		return false;		//�ڴ治�� ����ʧ��	
//	}
//	L->next = L;			//ͷ����priorָ��ͷ���
//	L->prior = L;			//ͷ����nextָ��ͷ���
//	return true;
//}
//
////�ж�ѭ�������Ƿ�Ϊ��
//bool isEmpty(DLinkList &L){
//	if (L->next == L)
//	{
//		return true;
//	}
//	else {
//		return false;
//	}
//}
//
////�жϽ��p�Ƿ�Ϊѭ��˫����ı�β���
//bool isTail(DLinkList &L, DLinkList &p) {
//	if (p->next == L)
//	{
//		return true;
//	}
//	else {
//		return false;
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
