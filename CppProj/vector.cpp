#include "vector.h"

cVector3::cVector3()
{
    x = y = z = 0.0;
}

cVector3::cVector3(double x, double y, double z)
{
    this->x = x; this->y = y; this->z = z;
}

cVector3::~cVector3()
{

}

bool cVector3::operator==(cVector3& vec)
{
    if (vec.x == x && vec.y == y && vec.z == z)
    {
        return true;
    }
    return false;
}

bool cVector3::operator!=(cVector3& vec)
{
    if (vec.x != x || vec.y == y || vec.z == z)
    {
        return true;
    }
    return false;
}

cVector3 cVector3::operator+(cVector3& vec)
{
    return cVector3(x + vec.x, y + vec.y, z + vec.z);
}

cVector3 cVector3::operator-(cVector3& vec)
{
    return cVector3(x - vec.x, y - vec.y, z - vec.z);
}

cVector3 cVector3::operator*(double d)
{
    return cVector3(x * d, y * d, z * d);
}

cVector3 cVector3::operator/(double d)
{
    return cVector3(x / d, y / d, z / d);
}

double cVector3::length()
{
    return sqrt(pow(x, 2) + pow(y, 2) + pow(z, 2));
}

cVector3 cVector3::normalize()
{
    return cVector3(x / length(), y / length(), z / length());
}

double cVector3::Dot(cVector3& v1)
{
    return x * v1.x + y * v1.y + z * v1.z;
}

cVector3 cVector3::Cross(cVector3& v1)
{
    return cVector3(y * v1.z - z * v1.y, z * v1.x - x * v1.z, x * v1.y - y * v1.x);
}

double cVector3::Angle(cVector3& v1)
{
    return acos(Dot(v1)/(length()*v1.length())) * 180 / 3.141592;
}

cVector3 operator*(double n, cVector3& vec)
{
    return vec * n;
}

std::ostream& operator<<(std::ostream& os, const cVector3& vec)
{
    os << vec.x << ", " << vec.y << ", " << vec.z;
    return os;
}

void cVector3::Reset(double x, double y, double z)
{
    this->x = x; this->y = y; this->z = z;
}
