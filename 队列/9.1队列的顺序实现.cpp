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
////��ʼ������
//void InitQuene(SqQueue &Q) {
//	//��ʼʱ����ͷ�Ͷ�βָ��ָ��0
//	Q.front = 0;
//	Q.rear = 0;
//}
//
////�ж϶����Ƿ�Ϊ��
//bool QueneEmpty(SqQueue &Q) {
//	if (Q.front == Q.rear) {
//		return true;
//	}
//	else {
//		return false;
//	}
//}
//
////���
//bool EnQuene(SqQueue &Q, int x){
//	if ((Q.rear+1)%Maxsize == Q.front) {  //�ж϶���  
//		return false;
//	}
//	else {
//		Q.data[Q.rear] = x;
//		Q.rear = (Q.rear + 1) % Maxsize; //��βָ���1ȡģ  //ѭ������
//		return true;
//	}
//}
//
//bool DnQuene(SqQueue &Q, int &x) {
//	if (Q.rear == Q.front) {   //�ж϶ӿ�
//		return false;
//	}
//	else {
//		x = Q.data[Q.front];
//		Q.front = (Q.front + 1) % Maxsize;   //ѭ������
//		return true;
//	}
//}
//
////�ж϶��г���
//int SizeofQuene(SqQueue &Q) {
//	return (Q.rear + Maxsize - Q.front) % Maxsize;
//
//}
//
////��ö�ͷԪ�ص�ֵ ��x����
//bool GetHead(SqQueue Q, int &x) {
//	if (Q.rear == Q.front) {
//		return false;		//�ӿ��򱨴�
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
