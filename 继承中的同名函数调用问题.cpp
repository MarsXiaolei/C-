//����������˵��C++�̳й�ϵ�е�ͬ��������������
//1�����������ֻ�ܵ��û����Լ��ĳ�Ա���������麯�����麯����
//2���������������Ե����������Լ��ĳ�Ա���������麯�����麯����
//Ҳ���Ե��û���ĳ�Ա���������麯�����麯�������������������������::�޶�
//3������ָ��ָ���������ͨ���麯���������������麯�������û���ķ��麯��
#include <iostream>

using namespace std;

class Base 
{
public:
	virtual void setName()
	{
		cout << "����Base setName" << endl;
	}

	void setValue()
	{
		cout << "����Base setValue" << endl;
	}
};

class Derived:public Base
{
public:
	virtual void setName()
	{
		cout << "����Derived setName" << endl;
	}

	void setValue()
	{
		cout << "����Derived setValue" << endl;
	}
};

int main()
{
	Base *base = new Base();
	base->setName();
	base->setValue();
	cout << endl;

	Base base2;
	base2.setName();
	base2.setValue();
	cout << endl;

	Derived *derived = new Derived();
	derived->setName();
	derived->setValue();
	cout << endl;

	Derived derived2;
	derived2.setName();
	derived2.setValue();
	cout << endl;

	Derived derived3;
	derived3.Base::setName();
	derived3.Base::setValue();
	cout << endl;

	Base *base3 = nullptr;
	base3 = new Derived();
	base3->setName();
	base3->setValue();
	cout << endl;

	system("pause");
	return 0;
}