//
//#include <iostream>
//#include <string>
//
//using namespace std;
//
//#define Maxsize 10
//typedef struct {
//	int data[Maxsize];
//	int front, rear;
//}SqQueue;
//
////初始化队列
//void InitQuene(SqQueue &Q) {
//	//初始时，队头和队尾指针指向0
//	Q.front = 0;
//	Q.rear = 0;
//}
//
////判断队列是否为空
//bool QueneEmpty(SqQueue &Q) {
//	if (Q.front == Q.rear) {
//		return true;
//	}
//	else {
//		return false;
//	}
//}
//
////入队
//bool EnQuene(SqQueue &Q, int x){
//	if ((Q.rear+1)%Maxsize == Q.front) {  //判断队满  
//		return false;
//	}
//	else {
//		Q.data[Q.rear] = x;
//		Q.rear = (Q.rear + 1) % Maxsize; //队尾指针加1取模  //循环队列
//		return true;
//	}
//}
//
//bool DnQuene(SqQueue &Q, int &x) {
//	if (Q.rear == Q.front) {   //判断队空
//		return false;
//	}
//	else {
//		x = Q.data[Q.front];
//		Q.front = (Q.front + 1) % Maxsize;   //循环队列
//		return true;
//	}
//}
//
////判断队列长度
//int SizeofQuene(SqQueue &Q) {
//	return (Q.rear + Maxsize - Q.front) % Maxsize;
//
//}
//
////获得队头元素的值 用x返回
//bool GetHead(SqQueue Q, int &x) {
//	if (Q.rear == Q.front) {
//		return false;		//队空则报错
//	}
//	else {
//		x = Q.data[Q.front];
//		return true;
//	}
//}
//
//int main()
//{
//	SqQueue Q;
//
//	cout << "Hello World!" << endl;
//	return 0;
//}
//
