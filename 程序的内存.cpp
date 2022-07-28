//#include<iostream>
//using namespace std;
////全局变量
////不在函数体内
//int a_1 = 10;
//int a_2 = 10;
//const int s_a_1 = 10;
//int main()
//{
//	//局部变量
//	int a = 10;
//	int b = 10;
//	cout << "a的地址：" << (int)&a << endl;
//	cout << "b的地址：" << (int)&b << endl;
//	cout << "a_1的地址：" << (int)&a_1 << endl;
//	cout << "a_2的地址：" << (int)&a_2 << endl;
//	//静态变量
//	static int s_a = 10;
//	cout << "s_a的地址：" << (int)&s_a << endl;
//	//常量
//	cout << "字符串常量的地址：" << (int)&"hello world!" << endl;
//	//const 修饰的变量
//	//const修饰的全局变量，const修饰的局部变量
//	cout << "全局常量的地址：" << (int)&s_a_1 << endl;
//	const int c_l_g = 10;
//	cout << "const修饰的局部变量地址：" << (int)&c_l_g << endl;
//	system("pause");
//	return 0;
//}
//栈区--------------存放函数的参数值，局部变量
/************************************
#include<iostream>
using namespace std;
//栈区注意事项--不要返回局部变量的地址
//栈区的数据由编译器管理开辟和释放
int* fun()
{
	int s = 10;//局部变量，存放在栈区
	return &s;//返回局部变量的地址
}
int main()
{
	int* p = fun();
	cout << *p << endl;//第一次可以打印正确的数字10，是因为编译器做了保留。
	cout << *p << endl;//第二次打印错误的数字是因为编译器没有在继续保留。
	system("pause");
	return 0;
}
**********************************/
//堆区
/*****************************************
#include<iostream>
using namespace std;
int* fun()
{
	//利用new关键字可以1将数据开辟到堆区
	int *p = new int(10);
	return p;//返回地址
}
int main()
{
	int* p = fun();
	cout << *p << endl;//输出正确
	cout << *p << endl;//输出正确
	system("pause");
	return 0;
}
********************************/
//new关键字
#include<iostream>
using namespace std;
//new运算符的使用方法
int* fun()
{
	int* a = new int(10);//new返回的是一个该数据类型地指针
	return a;
}
void test02()
{
	int* a = fun();
	cout << *a << endl;
	//数据用完用delete释放地址
	delete a;
	//cout << *a << endl;//内存已经释放，再次访问就是非法操作
}
//在堆区开辟一个数组
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
	//释放数组
	//释放数组时delete后面要加一个[]
	delete[]arr;
}
int main()
{
	test01();
	test02();

	system("pause");
	return 0;
}