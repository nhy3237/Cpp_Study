// useMyPoint.cpp
#include "MyPoint.h"
#include "Rectangle2D.h"
#include "Circle2D.h"
#include <iostream>
using namespace std;

/*
Q2. x�� y���� ���� ǥ���ϴ� MyPoint Ŭ������ �����϶�.
	- ��ǥ�� ��Ÿ���� �� ���� x,y ������ �ʵ�
	- �� (0,0)�� �����ϴ� �μ� ���� ������
	- ���� ��ǥ�� ���� �����ϴ� ������
	- x,y ������ �ʵ带 ���� ���� �� ���� get �Լ�
	- MyPoint ������ �� ������ �ٸ� �������� �Ÿ��� ��ȯ�ϴ� distance �Լ�
	Ŭ������ ���� UML ���̾�׷� �׸���, Ŭ������ �����϶�
	�� ���� ��(0,0)�� (10,30.5)�� �����ϰ� �� �� ������ �Ÿ��� ǥ���ϴ� ���α׷��� �ۼ��϶�.

	������ ��ǥ�� ���� Circle2D Ŭ������ ��ü�� Rectangle2D ��ü�� ���ο� �ִ��� ���θ�
	�Ǵ��ϴ� constains �Լ��� MyPoint ��ü�� ���ڷ� �ϴ� ������ �Լ��� �����϶�. */

int main()
{
	point p1(0, 0); point p2(10, 30.5);
	cout << "p1(0,0)�� p2(10,30.5) ������ �Ÿ� : " << p1.distance(p2) << endl;
	
	point p3(3, 3); Circle2D c1(2, 2, 5.5);
	cout << "p3(3,3)�� c1(2,2,5.5) ���ο� �ִ���? ";
	if (!contains(c1, p3))
	{
		cout << "FALSE" << endl;
	}
	else cout << "TRUE" << endl;
	return 0;
}
