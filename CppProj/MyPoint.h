// MyPoint.h
#pragma once
#include <iostream>

using namespace std;

class point
{
private:
	double x, y;

public:
	point();
	point(double x, double y);

	double getX();
	double getY();
	double distance(const point &p);

	//friend class Circle2D; friend class Rect;
};
