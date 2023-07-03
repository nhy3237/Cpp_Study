#include "vector.h"
#include <iostream>

using namespace std;

struct XYZ
{
	double x, y, z;
};

int main()
{
	// ex> v1 x, y, z : 1 2 3
//	   v2 x, y, z : -4 -5 6
//		v1 length : 3.74166
//		v2 length : 8.77496
//		v1�� 3�� �� : 3 6 9
//		v2�� 2�� ���� : -2 -2.5 3
//		�� ������ dot : xx
//		�� ������ cross : 27 - 18 3
//		�� ������ ���̰� : 83.0023
	/*XYZ xyz1, xyz2;

	cout << "�Է�) v1 x, y, z : ";
	cin >> xyz1.x >> xyz1.y >> xyz1.z;
	cout << "�Է�) v2 x, y, z : ";
	cin >> xyz2.x >> xyz2.y >> xyz2.z;

	cVector3 vec1(xyz1.x, xyz1.y, xyz1.z);
	cVector3 vec2(xyz2.x, xyz2.y, xyz2.z);

	cout << "\n<����>\nv1 length: " << vec1.length() << endl;
	cout << "v2 length: " << vec2.length() << endl;
	
	cout << "";
	cVector3 vec3;
	vec3 = vec1.operator+(vec2);
	cout << "\n<����>\n1. v1�� v2�� ���� v3�� x, y, z: " << vec3 << endl;

	vec3 = vec1.operator-(vec2);
	cout << "2. v1�� v2�� �� v3�� x, y, z: " << vec3 << endl;
	
	cout << "3. v1�� 3�� ����: " << vec1.operator*(3) << endl;
	cout << "4. v1�� 2�� �����带 �̿��Ͽ� ����: " << operator*(2, vec1) << endl;
	cout << "5. v2�� 2�� ����: " << vec2.operator/(2) << endl;
	
	vec3 = vec1.normalize();
	cout << "\nv1�� ���� ����: " << vec3 << endl;

	cout << "v1�� v2�� ����: " << vec1.Dot(vec2) << endl;

	vec3 = vec1.Cross(vec2);
	cout << "v1�� v2�� ���� x, y, z: " << vec3 << endl;

	cout << "v1�� v2�� ���̰�: " << vec1.Angle(vec2) << endl;*/

	/*
	Q1. ���� ������ �����Ͻÿ�.
		1.  u = (-1, 3, 2)�̰� v = (3, -4, 1)�̶�� �� ��
			���� ����� �����϶�
			(a) u+v
			(b) u-v
			(c) 3u+2v
			(d) -2u + v
		2. u = (-1, 3, 2)�̰� v = (3, -4, 1)�̶�� �� ��
			u�� v�� ����ȭ �϶�.
		3. ���� ���͵� ������ ���� ���϶�
			(a) u = (1,1,1), v = (2,3,4)
			(b) u = (1,1,0), v = (-2,2,0)
			(c) u = (-1,-1,-1), v = (3,1,0)
		
		4. � ��ǥ�踦 �������� ��A=(0,0,0), B=(0,1,3),
			C=(5,1,0)�� �ϳ��� �ﰢ���� �����Ѵٰ� ����.
			�� �ﰢ���� ������ ���͸� ���϶�. */

	cVector3 vec1(-1, 3, 2); cVector3 vec2(3, -4, 1);
	cout << "1. ����\nu = (-1,3,2), v = (3,-4,1)\n(a) u + v = (" << vec1.operator+(vec2) << ")\n";
	cout << "(b) u - v = (" << vec1.operator-(vec2) << ")\n";

	cVector3 vec3;
	vec3 = vec2.operator*(2);
	cout << "(c) 3u + 2v = (" << (vec1.operator*(3)).operator+(vec3) << ")\n";
	cout << "(d) -2u + v = (" << (vec1.operator*(-2)).operator+(vec2) << ")\n\n";

	cout << "2. ����ȭ\nu = (-1,3,2), v = (3,-4,1)\n(a) u ����ȭ = (" << vec1.normalize() << ")\n(b) v ����ȭ = (" << vec2.normalize() << ")\n\n";\

	vec1.Reset(1, 1, 1); vec2.Reset(2, 3, 4);
	cout << "3. ���̰�\n(a) u = (1,1,1), v = (2,3,4) : " << vec1.Angle(vec2) << "\n";
	vec1.Reset(1, 1, 0); vec2.Reset(-2, 2, 0);
	cout << "(b) u = (1,1,0), v = (-2,2,0) : " << (double)vec1.Angle(vec2) << "\n";
	vec1.Reset(-1, -1, -1); vec2.Reset(3, 1, 0);
	cout << "(c) u = (-1,-1,-1), v = (3,1,0) : " << vec1.Angle(vec2) << "\n\n";

	vec1.Reset(0, 0, 0); vec2.Reset(0, 1, 3); vec3.Reset(5, 1, 0);
	cout << "4. �ﰢ���� ������ ����\nA=(0,0,0), B=(0,1,3), C = (5,1,0) : (";
	
	cVector3 vec4(vec2.operator-(vec1)); cVector3 vec5(vec3.operator-(vec1));
	cout << vec4.Cross(vec5) <<")\n";

	return 0;
}