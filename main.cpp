//c++��Ԫ����
//���Ա������Ϊ��Ԫ����
//���˳���ܸı䣬���������޷�����˽�б���
//�˴��������ֲ����ߣ����ǲ��ᱨ��
//xiaolei 2020/7/21

#include <iostream>

using namespace std;

class Point;

class ManagerPoint
{
public:
	ManagerPoint() {}
	~ManagerPoint() {}
	double distance(Point &a);
};

class Point
{
public:
	Point():x(1.5),y(2.5)
	{
	}
	friend double ManagerPoint::distance(Point &a);
private:
	double x, y;
};

double ManagerPoint::distance(Point &a)
{
	double sum = a.x + a.y;
	return sum;
}

int main()
{
	Point p;
	ManagerPoint mp;
	float d = mp.distance(p);
	cout << "d: " << d << endl;
	system("pause");
	return 0;
}