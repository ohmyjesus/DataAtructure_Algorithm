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
//��ʼ��һ���յĵ�����(��ͷ���)
//bool InitList(LNode* &L1) {
//	L1 = new LNode[sizeof(LNode)];		//����һ��ͷ���
//	L1->next = NULL;   //ͷ���֮��û�н��
//	return true;
//}eturn true;
//}
//
////ɾ��ָ�����p  ֮͵�컻��   ��������
//bool DeleteNode(LNode* p) {
//	if (p == NULL) {
//		return false;
//	}
//	LNode* q = p->next;    //ָ��p������һ�����
//	p->data = q->data;		//��������
//	p->next = q->next;		//�Ͽ�p��q������
//	delete q;				//�ͷ��ڴ�
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
