#include <iostream>

using namespace std;

void test1() {
	int a1;
	cout << sizeof(a1) << " ";

	int* a;
	cout << sizeof(a) << " ";


	char b;
	cout << sizeof(b) << " ";

	char* b1;
	cout << sizeof(b1) << " ";

	double c1;
	cout << sizeof(c1) << " ";
	double* c2;
	cout << sizeof(c2) << " ";

}
void test(int a, int b)
{
	a = 3;
	b = 4;
}
void test2(int* a, int* b) {
	*a = 3;
	*b = 4;
}

void  test3(int& a, int& b) {
	a = 20;
	b = 30;
}

int main() {

	//	test1();			//32位机器的字节数


	int a = 100;
	int b = 200;

	test(a, b);			//测试传递参数

	cout << a << endl;
	cout << b << endl;

	test2(&a, &b);

	cout << a << endl;
	cout << b << endl;


	test3(a, b);

	cout << a << endl;
	cout << b << endl;


	return 0;

}