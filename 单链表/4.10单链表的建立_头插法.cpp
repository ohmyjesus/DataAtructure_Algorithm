//
//#include <iostream>
//#include <string>
//
//using namespace std;
//
//typedef struct LNode {
//	int data;  //数据域
//	LNode *next;  //指针域
//}LNode, *LinkList;
//
////头插法建立单链表
//LinkList List_HeadInsert(LinkList &L) {
//	int x;
//	LNode* s;
//	L = new LNode[sizeof(LNode)];   //创建空链表并创建头指针
//	L->next = NULL;					//最好都是把头指针指向NULL
//	cout << "输入结点的值: ";
//	cin >> x;
//	while (x != 9999) {
//		s = new LNode[sizeof(LNode)];  //s指向新开辟的内存的首地址
//		s->data = x;					//x值赋给s中的data
//		s->next = L->next;				//L的next交给s的next
//		L->next = s;					//L头指针指向s
//		cout << "输入结点的值: ";
//		cin >> x;						//依次循环，不断在头结点处插入新的元素
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
