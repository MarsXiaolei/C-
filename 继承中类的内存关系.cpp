//����������˵��C++�̳й�ϵ�е�ͬ��������������
//1�����������ֻ�ܵ��û����Լ��ĳ�Ա���������麯�����麯����
//2���������������Ե����������Լ��ĳ�Ա���������麯�����麯����
//Ҳ���Ե��û���ĳ�Ա���������麯�����麯�������������������������::�޶�
//3������ָ��ָ���������ͨ���麯���������������麯�������û���ķ��麯��
//��ˣ�����ָ��Ҫ���������ຯ���ͱ���Ҫ���麯����д������ܾ����麯�����ڵ�����

//��ӹ��ܣ�������̳�������ڴ��ϵ
//���̳��麯����������������ִһ�����޹���
#include <iostream>

using namespace std;

class Empty{

};

class Test {
public:
	void hello()
	{
	}
private:
	int i;
};

class Test2 {
public:
	virtual void hello()
	{
	}
};

class Test3 {
public:
	virtual void hello()
	{
	}

	virtual void world()
	{
	}
};

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

private:
	int i;
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
private:
	//int j;
};

int main()
{
	//����ռ��1���ֽ�
	cout << "sizeof(Empty): " << sizeof(Empty) << endl;
	//���麯����ռ�ڴ�
	cout << "sizeof(Test): " << sizeof(Test) << endl;
	//64λ�����麯��ռ��8���ֽڣ�����һ��void*
	cout << "sizeof(Test2): " << sizeof(Test2) << endl;
	//64λ��������麯��ռ��8���ֽڣ�����һ��void*
	cout << "sizeof(Test3): " << sizeof(Test3) << endl;
	//4���ֽ�
	cout << "sizeof(int): " << sizeof(int) << endl;
	//û�����Ϊʲô��16���ֽ�???�麯����+int������ɶ��
	cout << "sizeof(Base): " << sizeof(Base) << endl;
	//���̳��麯������ִһ�����޹���
	cout << "sizeof(Derived): " << sizeof(Derived) << endl;
	cout << endl;

	/*Base *base = new Base();
	base->setName();
	base->setValue();
	delete base;
	cout << endl;

	Base base2;
	base2.setName();
	base2.setValue();
	cout << endl;

	Derived *derived = new Derived();
	derived->setName();
	derived->setValue();
	delete derived;
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
	delete base3;
	cout << endl;*/

	system("pause");
	return 0;
}