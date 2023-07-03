// Rectangle2D.cpp
#include "Rectangle2D.h"
#include <iostream>
#include <cmath>

using namespace std;

double Rect::getX()
{
    return x;
}

double Rect::getY()
{
    return y;
}

double Rect::getWidth()
{
    return width;
}

double Rect::getHeight()
{
    return height;
}

void Rect::setXY()
{
    cin >> x >> y;
}

void Rect::setWH()
{
    cin >> width >> height;
}

Rect::Rect()
{
    x = 0.0; y = 0.0; width = 1.0; height = 1.0;
}

Rect::Rect(double x, double y, double width, double height)
{
    this->x = x; this->y = y; this->width = width; this->height = height;
}

Rect::~Rect()
{

}

double Rect::getArea()
{
    return width * height;
}

double Rect::getPerimeter()
{
    return width * 2 + height * 2;
}

bool Rect::contains(double x, double y)
{
    double xD, yD; // x 사이 거리, y 사이 거리
    xD = abs(this->x - x); yD = abs(this->y - y);

    if (xD <= width / 2 && yD <= height / 2)
    {
        return true;
    }
    return false;
}

bool Rect::contains(const Rect& r)
{
    double xD, yD;
    xD = abs(r.x - x); yD = abs(r.y - y);

    if (xD <= abs(r.width - width) / 2 && yD <= abs(r.height - height) / 2)
    {
        return true;
    }
    return false;
}

bool Rect::overlaps(const Rect& r)
{
    double xD, yD;
    xD = abs(x - r.x); yD = abs(y - r.y);

    if (xD < abs(width + r.width) / 2 && yD < (height + r.height) / 2)
    {
        return true;
    }
    return false;
}
