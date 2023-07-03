#pragma once

/*
Q1. GeometricObject 베이스 클래스로 해서 다음 클래스들을 재설계해라.
	Circle2D, Rectangle2D, MyPoint 클래스를 추상 클래스 상속 개념을 적용하여
	다시 작성하라.
	UML 클래스 다이어그램도 작성. */

class GeometricObject
{
private:
	double x, y;

public:
	double getX();
	double getY();

	virtual double getArea() = 0;
	virtual double getPrimeter() = 0;
};

class Circle2D : public GeometricObject
{
private:
	double radius;

public:
	Circle2D();
	Circle2D(double x, double y, double radius);
	~Circle2D();

	double getRadius();
	
	bool contains(double x, double y);
	friend bool contains(const Circle2D& c, MyPoint& p);
	bool contains(const Circle2D& circle);
	bool overlaps(const Circle2D& circle);
};

class Rectangle2D : public GeometricObject
{
private:
	double width, height;

public:
	double getWidth();
	double getHeight();
	void setXY();
	void setWH();

	Rectangle2D();
	Rectangle2D(double x, double y, double width, double height);

	bool contains(double x, double y);
	bool contains(const Rectangle2D& r);
	bool overlaps(const Rectangle2D& r);

};

class MyPoint : public GeometricObject
{
public:
	MyPoint();
	MyPoint(double x, double y);
	double distance(const MyPoint& p);
};