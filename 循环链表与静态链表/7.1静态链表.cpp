
#include <iostream>
#include <string>

using namespace std;

#define Maxsize 10		//静态链表的最大长度
struct Node {
	int data;			//存储数据元素
	int next;			//下一个元素的数组下标
};




int main()
{
	Node a[Maxsize];		//数组a作为静态链表


	cout << "Hello World!" << endl;
	return 0;
}

