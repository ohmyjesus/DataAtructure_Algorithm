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
//////��ʼ��һ���յĵ�����(��ͷ���)
//bool InitList(LNode* &L1) {
//	L1 = new LNode[sizeof(LNode)];		//����һ��ͷ���
//	L1->next = NULL;   //ͷ���֮��û�н��
//	return true;
//}
//
////�ڵ�i��λ�ò���Ԫ��e(��ͷ���)
//bool ListInsert(LinkList &L, int i, int e) {
//	//1.�ҵ����
//	if (i < 1) {
//		return false;
//	}
//	LNode* p;
//	int j = 0;	 //j��ʾ��ǰPָ���ǵڼ������
//	p = L;		 //Lָ��ͷ��㣬ͷ����ǵ�0�����(���������)
//	while (p != NULL && j < i - 1) {
//		p = p->next;
//		j++;
//	}
//	if (p == NULL) {//iֵ���Ϸ�
//		return false; 
//	}
//	//2.������
//	LNode* s = new LNode[sizeof(LNode)];
//	s->data = e;
//	s->next = p->next;  //�����¾�˳���ܵߵ�
//	p->next = s;
//	return true; //����ɹ�
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
