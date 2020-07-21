//C++��Ԫ������ʹ�ã�ȫ�ֺ�����
//1��һ����Ԫ������Ӧһ����
//2��һ����Ԫ������Ӧ����࣬��Ҫ��ǰ������
//3����Ԫ��������ͨ���������������г�Ա����
//4���������������ⶨ�壬�������࣬����һ��ͨ����
//5������ʱ��Ҫ�ں�������ǰ���Ϲؼ���friend
//6���ô�������˳��������Ч�ʣ����������ͼ��Ͱ�ȫ�Լ���ʱ�俪����
//7��ȱ�㣺�ƻ�����ķ�װ�Ժ������ԣ�����˽�г�Ա��


#include <iostream>

using namespace std;

class Circle;//��ǰ������

class Rectangle
{
public:
	Rectangle():width(2.0), height(5.5)
	{
	}
	~Rectangle()
	{
	}
	friend float getArea(Rectangle &r);
	friend float getSumArea(Rectangle &r,Circle &c);
	
private:
	float width;
	float height;
};

class Circle
{
public:
	Circle() :center_x(2.0), center_y(5.5), radius(3)
	{
	}
	~Circle()
	{
	}
	friend float getArea(Circle &r);
	friend float getSumArea(Rectangle &r, Circle &c);

private:
	float center_x;
	float center_y;
	float radius;
};

//��ȡ���ε����
float getArea(Rectangle &r)
{
	double area=r.width*r.height; 
	return area;
}

//��ȡԲ�����
float getArea(Circle &c)
{
	double area = 3.14*c.radius*c.radius;
	return area;
}

//��ȡ���κ�Բ�������
float getSumArea(Rectangle &r, Circle &c)
{
	float sum = r.width*r.height + c.radius*c.radius*3.14;
	return sum;
}

int main()
{
	Rectangle rectangle;
	Circle circle;
	float rectangle_area = getArea(rectangle);
	float circle_area = getArea(circle);
	cout << "rectangle_area: " << rectangle_area << endl;
	cout << "circle_area: " << circle_area << endl;
	float sum = getSumArea(rectangle, circle);
	cout << "sum: " << sum << endl;
	system("pause");
	return 0;
}