//
//#include <iostream>
//#include <string>
//
//using namespace std;
//
//typedef struct LNode {
//	int data;  //������
//	LNode *next;  //ָ����
//}LNode, *LinkList;
//
////ͷ�巨����������
//LinkList List_HeadInsert(LinkList &L) {
//	int x;
//	LNode* s;
//	L = new LNode[sizeof(LNode)];   //��������������ͷָ��
//	L->next = NULL;					//��ö��ǰ�ͷָ��ָ��NULL
//	cout << "�������ֵ: ";
//	cin >> x;
//	while (x != 9999) {
//		s = new LNode[sizeof(LNode)];  //sָ���¿��ٵ��ڴ���׵�ַ
//		s->data = x;					//xֵ����s�е�data
//		s->next = L->next;				//L��next����s��next
//		L->next = s;					//Lͷָ��ָ��s
//		cout << "�������ֵ: ";
//		cin >> x;						//����ѭ����������ͷ��㴦�����µ�Ԫ��
//	}
//	return L;
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
