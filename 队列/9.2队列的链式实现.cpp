
#include <iostream>
#include <string>

using namespace std;

typedef struct LinkNode {	//��ʽ���н��
	int data;
	LinkNode* next;
}LinkNode;

typedef struct {			//��ʽ����
	LinkNode* front;		//���еĶ�ͷ�Ͷ�βָ��
	LinkNode* rear;
}LinkQuene;

//��ʼ��
void InitQuene(LinkQuene &Q) {
	//��ʼʱ  front��rear��ָ��ͷ���
	Q.front = new LinkNode[sizeof(LinkNode)];
	Q.rear = Q.front;
	Q.front->next = NULL;

}

//��βԪ�����(��ͷ���)
bool EnQuene(LinkQuene &Q, int x) {
	LinkNode* p = new LinkNode[sizeof(LinkNode)];
	p->data = x;
	Q.rear->next = p;	//�½����뵽rear֮��
	p->next = NULL;		
	Q.rear = p;			//�޸ı�βָ��

}

//��ͷԪ�س���(��ͷ���)
bool DeQuene(LinkQuene &Q, int& x) {
	if (Q.front == Q.rear) {
		return false;
	}
	else {
		LinkNode* p = new LinkNode[sizeof(LinkNode)];
		p = Q.front->next;
		x = p->data;
		Q.front->next = p->next;
		if (Q.rear == p)	//����˴������һ��������
			Q.rear = Q.front;//�޸�rearָ�� ʹ�䶼ָ��ͷ���
		delete p;
		return true;
	}
}

//�ж϶����Ƿ�Ϊ��
bool IsEmpty(LinkQuene &Q) {
	if (Q.front == Q.rear)
		return true;
	else {
		return false;
	}
}


int main()
{
	LinkQuene Q;

	cout << "Hello World!" << endl;
	return 0;
}

