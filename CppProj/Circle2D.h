// Circle2D.h
#pragma once
#include "MyPoint.h"

/*
Q2. 다음을 포함하는 Cirect2D 클래스를 정의하라.
	- 원의 중심을 나타내는 x,y라는 두 개의 double 데이터 필드와 get 상수 함수.
	- double 데이터 필드 radius 와 get 상수 함수
	- (x,y)가 (0,0), radius가 1인 기본원을 생성하는 인수 없는 생성자
	- 지정된 x,y와 radius로 원을 생성하는 생성자
	- 원의 둘레를 반환하는 getPrimeter() 상수 함수
	- 지정된 점 (x,y)가 생성된 원 내부에 있을 경우,
	  true를 반환하는 contains(double x, double y) 상수 함수
	- 지정된 원이 생성된 원 내부에 있을 경우,
	  true를 반환하는 contains(const Circle2D& circle) 상수 함수
	- 지정된 원이 생성된 원과 중첩되는 경우,
	  true를 반환하는 overlaps(const Circle2D& circle) 상수 함수
	- 클래스에 대한 UML 다이어그램을 그리고 클래스를 구현하라.
	
	Circle2D 객체 c1(2,2,5.5), c2(2,2,5.5), c3(4,5,10.5)를 생성하고
	c1의 면적과 둘레, c1.contains(3, 3), c1.contains(c2), c1.overlaps(c3) 의 결과를
    화면에 출력하는 프로그램을 작성하라. */

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