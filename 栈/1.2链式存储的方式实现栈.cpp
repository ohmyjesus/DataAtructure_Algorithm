//
//#include <iostream>
//#include <string>
//
//using namespace std;
//
//typedef struct Linknode {
//	int data;
//	Linknode* next;
//} *LiStack;
//
//////��ʼ��ջ  ��ͷ����
//void InitStack(LiStack &L) {
//	L = new Linknode[sizeof(Linknode)];
//	L = NULL;		//NULL��ʾ��ʱջ�л�û���κ�����
//}
//
// //����Ľ�ջ  ��ͷ���ʹ��β�巨
//bool PushStack(LiStack &L, int x) {
//	Linknode* s;
//	s = new Linknode[sizeof(Linknode)];
//	if (s == NULL) {
//		return false; //�ڴ治�� ����ʧ��
//	}
//	s->next = L->next;
//	s->data = x;
//	L->next = s;
//}
//
////��ջ�ĳ�ջ  ��ͷ���ʹ�ú�ɾ������
//bool PopStack(LiStack &L, int &x) {
//	if (L->next == NULL) {
//		return false;
//	}
//	Linknode* p = L->next;
//	L->next = p->next;
//	delete p;
//	return true;
//
//}
//
//int main()
//{
//	LiStack L;
//
//	cout << "Hello World!" << endl;
//	return 0;
//}
//
