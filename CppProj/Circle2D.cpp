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

bool Circle2D::contains(double x, double y) // ���� �� ���ο� ���� ���
{
    if (pow(x - this->x, 2) + pow(y - this->y, 2) < pow(radius, 2))
    {
        return true;
    }
    return false;
}

bool contains(const Circle2D& c, point& p) // ���� �� ���ο� ���� ���
{
    if (pow(c.x - p.getX(), 2) + pow(c.y - p.getY(), 2) < pow(c.radius, 2))
    {
        return true;
    }
    return false;
}

bool Circle2D::contains(const Circle2D& circle) // ���� �� ���ο� ���� ���
{
    double D = sqrt(pow(x - circle.x, 2) + pow(y - circle.y, 2));

    if (abs(circle.radius - radius) == D)
    {
        if (circle.radius == radius)
        {
            cout << "TRUE �� ���� ����.\n";
        }
        else cout << "TRUE �� ���� �����Ѵ�.\n";
        return true;
    }
    else if (radius > circle.radius && abs(circle.radius - radius) > D)
    {
        cout << "TRUE ���� ���ο� �ִ�.\n";
        return true;
    }
    return false;
}

bool Circle2D::overlaps(const Circle2D& circle) // ��ø �� ���
{
    double D = sqrt(pow(x - circle.x, 2) + pow(y - circle.y, 2));

    if (circle.radius + radius == D)
    {
        cout << "TRUE �� ���� �����Ѵ�.\n";
        return true;
    }
    else if (circle.radius + radius > D || abs(circle.radius - radius) < D)
    {
        cout << "TRUE\n";
        return true;
    }
    return false;
}
