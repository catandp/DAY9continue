//#include<iostream>
//using namespace std;
////ȫ�ֱ���
////���ں�������
//int a_1 = 10;
//int a_2 = 10;
//const int s_a_1 = 10;
//int main()
//{
//	//�ֲ�����
//	int a = 10;
//	int b = 10;
//	cout << "a�ĵ�ַ��" << (int)&a << endl;
//	cout << "b�ĵ�ַ��" << (int)&b << endl;
//	cout << "a_1�ĵ�ַ��" << (int)&a_1 << endl;
//	cout << "a_2�ĵ�ַ��" << (int)&a_2 << endl;
//	//��̬����
//	static int s_a = 10;
//	cout << "s_a�ĵ�ַ��" << (int)&s_a << endl;
//	//����
//	cout << "�ַ��������ĵ�ַ��" << (int)&"hello world!" << endl;
//	//const ���εı���
//	//const���ε�ȫ�ֱ�����const���εľֲ�����
//	cout << "ȫ�ֳ����ĵ�ַ��" << (int)&s_a_1 << endl;
//	const int c_l_g = 10;
//	cout << "const���εľֲ�������ַ��" << (int)&c_l_g << endl;
//	system("pause");
//	return 0;
//}
//ջ��--------------��ź����Ĳ���ֵ���ֲ�����
/************************************
#include<iostream>
using namespace std;
//ջ��ע������--��Ҫ���ؾֲ������ĵ�ַ
//ջ���������ɱ����������ٺ��ͷ�
int* fun()
{
	int s = 10;//�ֲ������������ջ��
	return &s;//���ؾֲ������ĵ�ַ
}
int main()
{
	int* p = fun();
	cout << *p << endl;//��һ�ο��Դ�ӡ��ȷ������10������Ϊ���������˱�����
	cout << *p << endl;//�ڶ��δ�ӡ�������������Ϊ������û���ڼ���������
	system("pause");
	return 0;
}
**********************************/
//����
/*****************************************
#include<iostream>
using namespace std;
int* fun()
{
	//����new�ؼ��ֿ���1�����ݿ��ٵ�����
	int *p = new int(10);
	return p;//���ص�ַ
}
int main()
{
	int* p = fun();
	cout << *p << endl;//�����ȷ
	cout << *p << endl;//�����ȷ
	system("pause");
	return 0;
}
********************************/
//new�ؼ���
#include<iostream>
using namespace std;
//new�������ʹ�÷���
int* fun()
{
	int* a = new int(10);//new���ص���һ�����������͵�ָ��
	return a;
}
void test02()
{
	int* a = fun();
	cout << *a << endl;
	//����������delete�ͷŵ�ַ
	delete a;
	//cout << *a << endl;//�ڴ��Ѿ��ͷţ��ٴη��ʾ��ǷǷ�����
}
//�ڶ�������һ������
void test01()
{
	int* arr = new int[10];
	for (int i = 0; i < 10; i++)
	{
		arr[i] = i + 100;

	}
	for (int i = 0; i < 10; i++)
	{
		cout << arr[i] << endl;
	}
	//�ͷ�����
	//�ͷ�����ʱdelete����Ҫ��һ��[]
	delete[]arr;
}
int main()
{
	test01();
	test02();

	system("pause");
	return 0;
}