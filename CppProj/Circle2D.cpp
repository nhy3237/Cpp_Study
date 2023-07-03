// Circle2D.cpp

#include "Circle2D.h"
#include <iostream>
#include <cmath>

using namespace std;

Circle2D::Circle2D()
{
    x = 0.0; y = 0.0; radius = 1.0;
}

Circle2D::Circle2D(double x, double y, double radius)
{
	this->x = x; this->y = y; this->radius = radius;
}

Circle2D::~Circle2D()
{

}

double Circle2D::getX()
{
    return x;
}

double Circle2D::getY()
{
    return y;
}

double Circle2D::getRadius()
{
    return radius;
}

double Circle2D::getArea()
{
    return radius * radius * 3.141592;
}

double Circle2D::getPrimeter()
{
    return radius * 2 * 3.141592;
}

bool Circle2D::contains(double x, double y) // 점이 원 내부에 있을 경우
{
    if (pow(x - this->x, 2) + pow(y - this->y, 2) < pow(radius, 2))
    {
        return true;
    }
    return false;
}

bool contains(const Circle2D& c, point& p) // 점이 원 내부에 있을 경우
{
    if (pow(c.x - p.getX(), 2) + pow(c.y - p.getY(), 2) < pow(c.radius, 2))
    {
        return true;
    }
    return false;
}

bool Circle2D::contains(const Circle2D& circle) // 원이 원 내부에 있을 경우
{
    double D = sqrt(pow(x - circle.x, 2) + pow(y - circle.y, 2));

    if (abs(circle.radius - radius) == D)
    {
        if (circle.radius == radius)
        {
            cout << "TRUE 두 원은 같다.\n";
        }
        else cout << "TRUE 두 원은 내접한다.\n";
        return true;
    }
    else if (radius > circle.radius && abs(circle.radius - radius) > D)
    {
        cout << "TRUE 원이 내부에 있다.\n";
        return true;
    }
    return false;
}

bool Circle2D::overlaps(const Circle2D& circle) // 중첩 될 경우
{
    double D = sqrt(pow(x - circle.x, 2) + pow(y - circle.y, 2));

    if (circle.radius + radius == D)
    {
        cout << "TRUE 두 원은 외접한다.\n";
        return true;
    }
    else if (circle.radius + radius > D || abs(circle.radius - radius) < D)
    {
        cout << "TRUE\n";
        return true;
    }
    return false;
}
