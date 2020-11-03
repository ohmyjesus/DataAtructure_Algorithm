
#include <iostream>
#include <string>

using namespace std;

typedef struct LinkNode {	//链式队列结点
	int data;
	LinkNode* next;
}LinkNode;

typedef struct {			//链式队列
	LinkNode* front;		//队列的队头和队尾指针
	LinkNode* rear;
}LinkQuene;

//初始化
void InitQuene(LinkQuene &Q) {
	//初始时  front和rear都指向头结点
	Q.front = new LinkNode[sizeof(LinkNode)];
	Q.rear = Q.front;
	Q.front->next = NULL;

}

//队尾元素入队(带头结点)
bool EnQuene(LinkQuene &Q, int x) {
	LinkNode* p = new LinkNode[sizeof(LinkNode)];
	p->data = x;
	Q.rear->next = p;	//新结点插入到rear之后
	p->next = NULL;		
	Q.rear = p;			//修改表尾指针

}

//队头元素出队(带头结点)
bool DeQuene(LinkQuene &Q, int& x) {
	if (Q.front == Q.rear) {
		return false;
	}
	else {
		LinkNode* p = new LinkNode[sizeof(LinkNode)];
		p = Q.front->next;
		x = p->data;
		Q.front->next = p->next;
		if (Q.rear == p)	//如果此次是最后一个结点出队
			Q.rear = Q.front;//修改rear指针 使其都指向头结点
		delete p;
		return true;
	}
}

//判断队列是否为空
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

