// useRectangle2D.cpp
#include "Rectangle2D.h"
#include <iostream>

using namespace std;

/*
Q1. 다음을 포함하는 Rectangle2D 클래스를 정의하라.
	- 직사각형의 중심을 나타내는 x,y라는 두 개의 double 데이터 필드,
		이에 대한 get 상수함수와 set 함수, 사각형의 변은 x,y축에
		평행인 것으로 가정한다.
	- double 데이터 필드 width, height 와 이에 대한 get 상수 함수와 set 함수
	- (x,y)는 (0,0), width, height는 모두 1인 기본 직사각형을 생성하는
		인수 없는 생성자
	- 지정된 x,y,width,height로 직사각형을 생성하는 생성자
	- 직사각형의 면적을 반환하는 getArea() 상수 함수
	- 직사각형의 둘레를 반환하는 getPerimeter() 상수 함수
	- 지정된 점(x,y)가 생성된 직사각형의 내부에 있을 경우, true를 반환하는
		contains(double x, double y) 상수함수
	- 지정된 직사각형이 생성된 직사각형의 내부에 있을 경우, true를 반환하는
		contais(const Rectangle2D &r) 상수 함수
	- 지정된 직사각형이 생성된 직사각형과 중첩되는 경우, true를 반환하는
		overlaps(const Rectangle2D &r) 상수 함수
	클래스에 대한 UML 다이어그램을 그리고, 클래스를 구현하라.
	세 개의 Rectangle2D 객체 r1(2,2,5.5,4.9), r2(4,5,10.5,3.2), r3(3,5,2.3,5.4)
	를 생성하고, r1의 면적과 둘레를 화면에 출력하며 r1.constains(r2), r1.overlaps(r3)의 결과를 화면에 출력하는
	프로그램을 작성하라. */

int main()
{
	cout << "r1의 x, y, width, height : ";
	Rect r1;
	r1.setXY(); r1.setWH();
	cout << "r2의 x, y, width, height : ";
	Rect r2;
	r2.setXY(); r2.setWH();
	cout << "r3의 x, y, width, height : ";
	Rect r3;
	r3.setXY(); r3.setWH();
	
	cout << "\n직사각형 r1의 면적 : " << r1.getArea();
	cout << "\n직사각형 r1의 둘레 : " << r1.getPerimeter();

	cout << "\n\nr2가 r1 내부에 있는지? ";
	if (!r1.contains(r2)) cout << "False";
	else cout << "True";

	cout << "\nr3가 r1에 중첩 되는지? ";
	if (!r1.overlaps(r3)) cout << "False\n";
	else cout << "True\n";
}