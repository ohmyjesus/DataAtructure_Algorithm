//#include <iostream>
//#include <string>
//using namespace std;
//
////˳��� -- ��̬����
//#define InitSize 10
//struct Data {
//	int *data;  //ָ��̬���������ָ��
//	int MaxSize;//˳�����������
//	int length; //˳���ĵ�ǰ����
//};
//
////��ʼ��˳���
//void InitList(Data &d) {
//	//new����һƬ�������ڴ�ռ�
//	d.data = new int[InitSize * sizeof(int)];
//	d.length = 0;
//	d.MaxSize = InitSize;
//
//}
//
////���Ӷ�̬����ĳ���
//void IncreaseSize(Data &d, int len) {
//	int *p = d.data;
//	d.data = new int[(d.MaxSize + len) * sizeof(int)];
//	for (int i = 0; i < d.length; i++) {
//		d.data[i] = p[i];  //�����ݸ��Ƶ�������
//	}
//	d.MaxSize = d.MaxSize + len;  //�����������󳤶�
//	delete p;  //�ͷ��ڴ�
//}
//
////˳���Ļ�������--�������� 
//// ��λ��i������Ԫ��e  ����Ϊ˳����� ��˳�������
//bool ListInsert(Data &d, int i, int e) {
//	if (i<1 || i>d.length + 1) {
//		return false;
//	}
//	if (d.length == d.MaxSize) {
//		return false;
//	}
//	for (int j = d.length; j >= i; j--) {
//		d.data[j] = d.data[j - 1];
//	}
//	d.data[i - 1] = e;
//	d.length++;
//	return true;
//}
//
////˳���Ļ�������--ɾ������ 
//// ��λ��i��ɾ��Ԫ�� �����ر�ɾ����Ԫ�ظ�e  
//bool ListDelete(Data &d, int i, int &e) {
//	if (i < 1 || i > d.length) {
//		return false;
//	}
//	e = d.data[i - 1];
//	for (int j = i - 1; j < d.length - 1; j++) {
//		d.data[j] = d.data[j + 1];
//	}
//	d.length--;
//	return true;
//}
//
//int main()
//{
//	Data d1;
//	InitList(d1);
//
//	IncreaseSize(d1, 5);
//
//
//	cout << "Hello World!" << endl;
//	return 0;
//}
//
