#include <iostream>

using namespace std;

int num = 10;

void test()
{
	int num = 20;
	cout << "�ֲ�numֵ��" << num << endl;
	cout << "ȫ��numֵ��" << ::num << endl;
}

int main()
{
	test();
	cin.get();
	return 0;
}