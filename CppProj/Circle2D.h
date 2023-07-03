// Circle2D.h
#pragma once
#include "MyPoint.h"

/*
Q2. ������ �����ϴ� Cirect2D Ŭ������ �����϶�.
	- ���� �߽��� ��Ÿ���� x,y��� �� ���� double ������ �ʵ�� get ��� �Լ�.
	- double ������ �ʵ� radius �� get ��� �Լ�
	- (x,y)�� (0,0), radius�� 1�� �⺻���� �����ϴ� �μ� ���� ������
	- ������ x,y�� radius�� ���� �����ϴ� ������
	- ���� �ѷ��� ��ȯ�ϴ� getPrimeter() ��� �Լ�
	- ������ �� (x,y)�� ������ �� ���ο� ���� ���,
	  true�� ��ȯ�ϴ� contains(double x, double y) ��� �Լ�
	- ������ ���� ������ �� ���ο� ���� ���,
	  true�� ��ȯ�ϴ� contains(const Circle2D& circle) ��� �Լ�
	- ������ ���� ������ ���� ��ø�Ǵ� ���,
	  true�� ��ȯ�ϴ� overlaps(const Circle2D& circle) ��� �Լ�
	- Ŭ������ ���� UML ���̾�׷��� �׸��� Ŭ������ �����϶�.
	
	Circle2D ��ü c1(2,2,5.5), c2(2,2,5.5), c3(4,5,10.5)�� �����ϰ�
	c1�� ������ �ѷ�, c1.contains(3, 3), c1.contains(c2), c1.overlaps(c3) �� �����
    ȭ�鿡 ����ϴ� ���α׷��� �ۼ��϶�. */

class Circle2D
{
private:
	double x, y, radius;

public:
	Circle2D();
	Circle2D(double x, double y, double radius);
	~Circle2D();

	double getX();
	double getY();
	double getRadius();
	double getArea();
	double getPrimeter();
	bool contains(double x, double y);
	friend bool contains(const Circle2D& c, point& p);
	bool contains(const Circle2D& circle);
	bool overlaps(const Circle2D& circle);
};