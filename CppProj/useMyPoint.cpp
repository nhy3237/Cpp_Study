// useMyPoint.cpp
#include "MyPoint.h"
#include "Rectangle2D.h"
#include "Circle2D.h"
#include <iostream>
using namespace std;

/*
Q2. x와 y축의 점을 표시하는 MyPoint 클래스를 설계하라.
	- 좌표를 나타내는 두 개의 x,y 데이터 필드
	- 점 (0,0)을 생성하는 인수 없는 생성자
	- 지정 좌표의 점을 생성하는 생성자
	- x,y 데이터 필드를 위한 각각 두 개의 get 함수
	- MyPoint 유형의 한 점에서 다른 점까지의 거리를 반환하는 distance 함수
	클래스에 대한 UML 다이어그램 그리고, 클래스를 구현하라
	두 개의 점(0,0)과 (10,30.5)를 생성하고 두 점 사이의 거리를 표시하는 프로그램을 작성하라.

	생성된 좌표의 점이 Circle2D 클래스의 객체나 Rectangle2D 객체의 내부에 있는지 여부를
	판단하는 constains 함수를 MyPoint 객체를 인자로 하는 프렌드 함수로 구현하라. */

int main()
{
	point p1(0, 0); point p2(10, 30.5);
	cout << "p1(0,0)과 p2(10,30.5) 사이의 거리 : " << p1.distance(p2) << endl;
	
	point p3(3, 3); Circle2D c1(2, 2, 5.5);
	cout << "p3(3,3)이 c1(2,2,5.5) 내부에 있는지? ";
	if (!contains(c1, p3))
	{
		cout << "FALSE" << endl;
	}
	else cout << "TRUE" << endl;
	return 0;
}
