
#include <iostream>
#include <string>

using namespace std;
typedef struct LNode {
	int data;  //������
	struct LNode *next;  //ָ����
}LNode, *LinkList;


//��ʼ��һ���յĵ�����(��ͷ���)
bool InitList(LNode* &L1) {
	L1 = new LNode[sizeof(LNode)];		//����һ��ͷ���
	L1->next = NULL;   //ͷ���֮��û�н��
	return true;
}

//ɾ�������� ɾ����L�е�i��λ�õ�Ԫ�أ�����e����ɾ��Ԫ�ص�ֵ
int ListDelete(LinkList &L, int i, int &e) {
	if (i < 1) {
		return false;
	}
	LNode* p;
	int j = 0;
	p = L;
	while (p!=NULL && j<i-1)  //�ҵ���i����ǰ�����
	{
		p = p->next;
		j++;
	}
	if (p == NULL) {
		return false;
	}
	LNode* q;
	q = p->next;		//��qָ��ɾ�����
	e = q->data;		//��e����Ԫ�ص�ֵ
	p->next = q->next;  //��*q��������"�Ͽ�"
	delete q;			//�ͷŽ��Ĵ洢�ռ�
	return true;		//ɾ���ɹ�
}


int main()
{


	cout << "Hello World!" << endl;
	return 0;
}

