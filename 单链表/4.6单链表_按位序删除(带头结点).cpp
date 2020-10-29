
#include <iostream>
#include <string>

using namespace std;
typedef struct LNode {
	int data;  //数据域
	struct LNode *next;  //指针域
}LNode, *LinkList;


//初始化一个空的单链表(带头结点)
bool InitList(LNode* &L1) {
	L1 = new LNode[sizeof(LNode)];		//分配一个头结点
	L1->next = NULL;   //头结点之后还没有结点
	return true;
}

//删除操作。 删除表L中第i个位置的元素，并用e返回删除元素的值
int ListDelete(LinkList &L, int i, int &e) {
	if (i < 1) {
		return false;
	}
	LNode* p;
	int j = 0;
	p = L;
	while (p!=NULL && j<i-1)  //找到第i个的前驱结点
	{
		p = p->next;
		j++;
	}
	if (p == NULL) {
		return false;
	}
	LNode* q;
	q = p->next;		//令q指向被删除结点
	e = q->data;		//用e返回元素的值
	p->next = q->next;  //将*q结点从链中"断开"
	delete q;			//释放结点的存储空间
	return true;		//删除成功
}


int main()
{


	cout << "Hello World!" << endl;
	return 0;
}

