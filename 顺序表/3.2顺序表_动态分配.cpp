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
