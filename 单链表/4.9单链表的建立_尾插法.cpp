//#include <iostream>
//#include <string>
//
//
//using namespace std;
//
//typedef struct LNode {
//	int data;  //������
//	struct LNode *next;  //ָ����
//}LNode, *LinkList;
//
////β�巨����������
//LinkList List_TailInsert(LinkList &L) {
//	int x;
//	L = new LNode[sizeof(LNode)];   //��ʼ���ձ�����ͷ���
//	LNode* s = L;					//����sָ��
//	LNode* r = L;					//rΪ��βָ��
//	cout << "�������ֵ�� ";
//	cin >> x;						//�������ֵ
//	while (x != 9999) {				//����9999��ʾ����
//		s = new LNode[sizeof(LNode)];//����һ���µ��ڴ棬����sָ��ָ���׵�ַ
//		s->data = x;				//��s�е�data��ֵ
//		r->next = s;				//s���׵�ַ��r�е�next
//		r = s;						//rָ���µı�β���
//		cout << "�������ֵ�� ";
//		cin >> x;
//	}
//	r->next = NULL;					//β���ָ���ÿ�
//	return L;						//��������
//}
//
//int main()
//{
//	
//	cout << "Hello World!" << endl;
//	return 0;
//}
//
