//#include <iostream>
//#include <string>
//
//
//using namespace std;
//
//typedef struct LNode {
//	int data;  //数据域
//	struct LNode *next;  //指针域
//}LNode, *LinkList;
//
////尾插法建立单链表
//LinkList List_TailInsert(LinkList &L) {
//	int x;
//	L = new LNode[sizeof(LNode)];   //初始化空表并建立头结点
//	LNode* s = L;					//创建s指针
//	LNode* r = L;					//r为表尾指针
//	cout << "输入结点的值： ";
//	cin >> x;						//输入结点的值
//	while (x != 9999) {				//输入9999表示结束
//		s = new LNode[sizeof(LNode)];//开辟一段新的内存，并用s指针指向首地址
//		s->data = x;				//给s中的data赋值
//		r->next = s;				//s的首地址给r中的next
//		r = s;						//r指向新的表尾结点
//		cout << "输入结点的值： ";
//		cin >> x;
//	}
//	r->next = NULL;					//尾结点指针置空
//	return L;						//返回链表
//}
//
//int main()
//{
//	
//	cout << "Hello World!" << endl;
//	return 0;
//}
//
