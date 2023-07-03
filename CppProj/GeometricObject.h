#pragma once

/*
Q1. GeometricObject ���̽� Ŭ������ �ؼ� ���� Ŭ�������� �缳���ض�.
	Circle2D, Rectangle2D, MyPoint Ŭ������ �߻� Ŭ���� ��� ������ �����Ͽ�
	�ٽ� �ۼ��϶�.
	UML Ŭ���� ���̾�׷��� �ۼ�. */

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