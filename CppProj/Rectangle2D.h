// Rectangle2D.h
#pragma once

class Rect{
private:
	double x, y, width, height;

public:
	double getX();
	double getY();
	double getWidth();
	double getHeight();
	void setXY();
	void setWH();

	Rect();
	Rect(double x, double y, double width, double height);
	~Rect();

	double getArea();
	double getPerimeter();
	
	bool contains(double x, double y);
	bool contains(const Rect& r);
	bool overlaps(const Rect& r);
};