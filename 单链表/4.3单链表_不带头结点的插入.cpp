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
////��ʼ��һ���յĵ�����(����ͷ���)
//bool InitList(LNode* &L) {
//	L = NULL;		//�ձ���ʱ��û���κν��
//	return true;
//}
//
//bool ListInsert(LinkList &L,int i,int e) {
//	if (i < 1) {
//		return false;
//	}
//	if (i == 1) {  //�����һ�����Ĳ������������Ĳ�����ͬ
//		LNode* s = new LNode[sizeof(LNode)];
//		s->data = e;
//		s->next = L;
//		L = s;		//ͷָ��ָ���½��
//		return true;
//	}
//	LNode* p;
//	int j = 1;
//	p = L;		//pָ���1�����  ע�ⲻ��ͷ���
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
