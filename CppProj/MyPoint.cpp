// MyPoint.cpp
#include "MyPoint.h"
#include <cmath>

point::point()
{
    x = 0.0; y = 0.0;
}

point::point(double x, double y)
{
    this->x = x; this->y = y;
}

double point::getX()
{
    return x;
}

double point::getY()
{
    return y;
}

double point::distance(const point& p)
{
    return sqrt(pow(x - p.x, 2) + pow(y - p.y, 2));
}
