// useRectangle2D.cpp
#include "Rectangle2D.h"
#include <iostream>

using namespace std;

/*
Q1. ������ �����ϴ� Rectangle2D Ŭ������ �����϶�.
	- ���簢���� �߽��� ��Ÿ���� x,y��� �� ���� double ������ �ʵ�,
		�̿� ���� get ����Լ��� set �Լ�, �簢���� ���� x,y�࿡
		������ ������ �����Ѵ�.
	- double ������ �ʵ� width, height �� �̿� ���� get ��� �Լ��� set �Լ�
	- (x,y)�� (0,0), width, height�� ��� 1�� �⺻ ���簢���� �����ϴ�
		�μ� ���� ������
	- ������ x,y,width,height�� ���簢���� �����ϴ� ������
	- ���簢���� ������ ��ȯ�ϴ� getArea() ��� �Լ�
	- ���簢���� �ѷ��� ��ȯ�ϴ� getPerimeter() ��� �Լ�
	- ������ ��(x,y)�� ������ ���簢���� ���ο� ���� ���, true�� ��ȯ�ϴ�
		contains(double x, double y) ����Լ�
	- ������ ���簢���� ������ ���簢���� ���ο� ���� ���, true�� ��ȯ�ϴ�
		contais(const Rectangle2D &r) ��� �Լ�
	- ������ ���簢���� ������ ���簢���� ��ø�Ǵ� ���, true�� ��ȯ�ϴ�
		overlaps(const Rectangle2D &r) ��� �Լ�
	Ŭ������ ���� UML ���̾�׷��� �׸���, Ŭ������ �����϶�.
	�� ���� Rectangle2D ��ü r1(2,2,5.5,4.9), r2(4,5,10.5,3.2), r3(3,5,2.3,5.4)
	�� �����ϰ�, r1�� ������ �ѷ��� ȭ�鿡 ����ϸ� r1.constains(r2), r1.overlaps(r3)�� ����� ȭ�鿡 ����ϴ�
	���α׷��� �ۼ��϶�. */

int main()
{
	cout << "r1�� x, y, width, height : ";
	Rect r1;
	r1.setXY(); r1.setWH();
	cout << "r2�� x, y, width, height : ";
	Rect r2;
	r2.setXY(); r2.setWH();
	cout << "r3�� x, y, width, height : ";
	Rect r3;
	r3.setXY(); r3.setWH();
	
	cout << "\n���簢�� r1�� ���� : " << r1.getArea();
	cout << "\n���簢�� r1�� �ѷ� : " << r1.getPerimeter();

	cout << "\n\nr2�� r1 ���ο� �ִ���? ";
	if (!r1.contains(r2)) cout << "False";
	else cout << "True";

	cout << "\nr3�� r1�� ��ø �Ǵ���? ";
	if (!r1.overlaps(r3)) cout << "False\n";
	else cout << "True\n";
}