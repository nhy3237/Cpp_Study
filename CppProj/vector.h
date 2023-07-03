#pragma once

#include <iostream>

class cVector3
{
private:
	double x, y, z;
	
public:
	cVector3();
	cVector3(double x, double y, double z);
	~cVector3();

	bool operator==(cVector3& vec);
	bool operator!=(cVector3& vec);
	cVector3 operator+(cVector3& vec);
	cVector3 operator-(cVector3& vec);
	cVector3 operator*(double d);
	cVector3 operator/(double d);

	double length(); // : ���� ���� ���ϱ�
	cVector3 normalize(); // : ���� ����

	double Dot(cVector3& v1);
	cVector3 Cross(cVector3& v1);
	double Angle(cVector3& v1);

	friend cVector3 operator*(double n, cVector3& vec);
	friend std::ostream& operator<<(std::ostream& os, const cVector3& vec);

	void Reset(double x, double y, double z);
};

// ex> v1 x, y, z : 1 2 3
//	   v2 x, y, z : -4 -5 6
//		v1 length : 3.74166
//		v2 length : 8.77496
//		v1�� 3�� �� : 3 6 9
//		v2�� 2�� ���� : -2 -2.5 3
//		�� ������ dot : xx
//		�� ������ cross : 27 - 18 3
//		�� ������ ���̰� : 83.0023