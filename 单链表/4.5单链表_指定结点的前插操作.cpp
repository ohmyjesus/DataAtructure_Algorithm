//#include <iostream>
//#include <string>
//
//using namespace std;
//
//typedef struct LNode {
//	int data;  //������
//	LNode* next;  //ָ����
//}LNode, *LinkList;
//
////��ʼ��һ���յĵ�����(����ͷ���)
//bool InitList(LNode* &L) {
//	L = NULL;		//�ձ���ʱ��û���κν��
//	return true;
//}
//
////ǰ������� ��p���֮ǰ����Ԫ��e
//bool InsertPriorNode(LNode *p, int e) {
//	if (p == NULL) {
//		return false;
//	}
//	LNode* s = new LNode[sizeof(LNode)];
//	s->next = p->next;
//	p->next = s;
//	s->data = p->data;  //��p��Ԫ�ظ��Ƶ�s��
//	p->data = e;		//p��Ԫ�ظ���Ϊe
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
