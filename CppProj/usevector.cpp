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
//		v1에 3을 곱 : 3 6 9
//		v2를 2로 나눔 : -2 -2.5 3
//		두 벡터의 dot : xx
//		두 벡터의 cross : 27 - 18 3
//		두 벡터의 사이각 : 83.0023
	/*XYZ xyz1, xyz2;

	cout << "입력) v1 x, y, z : ";
	cin >> xyz1.x >> xyz1.y >> xyz1.z;
	cout << "입력) v2 x, y, z : ";
	cin >> xyz2.x >> xyz2.y >> xyz2.z;

	cVector3 vec1(xyz1.x, xyz1.y, xyz1.z);
	cVector3 vec2(xyz2.x, xyz2.y, xyz2.z);

	cout << "\n<길이>\nv1 length: " << vec1.length() << endl;
	cout << "v2 length: " << vec2.length() << endl;
	
	cout << "";
	cVector3 vec3;
	vec3 = vec1.operator+(vec2);
	cout << "\n<연산>\n1. v1과 v2를 더한 v3의 x, y, z: " << vec3 << endl;

	vec3 = vec1.operator-(vec2);
	cout << "2. v1과 v2를 뺀 v3의 x, y, z: " << vec3 << endl;
	
	cout << "3. v1에 3을 곱함: " << vec1.operator*(3) << endl;
	cout << "4. v1에 2를 프렌드를 이용하여 곱함: " << operator*(2, vec1) << endl;
	cout << "5. v2에 2를 나눔: " << vec2.operator/(2) << endl;
	
	vec3 = vec1.normalize();
	cout << "\nv1의 단위 벡터: " << vec3 << endl;

	cout << "v1과 v2의 내적: " << vec1.Dot(vec2) << endl;

	vec3 = vec1.Cross(vec2);
	cout << "v1과 v2의 외적 x, y, z: " << vec3 << endl;

	cout << "v1과 v2의 사이각: " << vec1.Angle(vec2) << endl;*/

	/*
	Q1. 벡터 연산을 구현하시오.
		1.  u = (-1, 3, 2)이고 v = (3, -4, 1)이라고 할 때
			다음 계산을 수행하라
			(a) u+v
			(b) u-v
			(c) 3u+2v
			(d) -2u + v
		2. u = (-1, 3, 2)이고 v = (3, -4, 1)이라고 할 때
			u와 v를 정규화 하라.
		3. 다음 벡터들 사이의 각을 구하라
			(a) u = (1,1,1), v = (2,3,4)
			(b) u = (1,1,0), v = (-2,2,0)
			(c) u = (-1,-1,-1), v = (3,1,0)
		
		4. 어떤 좌표계를 기준으로 점A=(0,0,0), B=(0,1,3),
			C=(5,1,0)이 하나의 삼각형을 정의한다고 하자.
			이 삼각형에 수직인 벡터를 구하라. */

	cVector3 vec1(-1, 3, 2); cVector3 vec2(3, -4, 1);
	cout << "1. 연산\nu = (-1,3,2), v = (3,-4,1)\n(a) u + v = (" << vec1.operator+(vec2) << ")\n";
	cout << "(b) u - v = (" << vec1.operator-(vec2) << ")\n";

	cVector3 vec3;
	vec3 = vec2.operator*(2);
	cout << "(c) 3u + 2v = (" << (vec1.operator*(3)).operator+(vec3) << ")\n";
	cout << "(d) -2u + v = (" << (vec1.operator*(-2)).operator+(vec2) << ")\n\n";

	cout << "2. 정규화\nu = (-1,3,2), v = (3,-4,1)\n(a) u 정규화 = (" << vec1.normalize() << ")\n(b) v 정규화 = (" << vec2.normalize() << ")\n\n";\

	vec1.Reset(1, 1, 1); vec2.Reset(2, 3, 4);
	cout << "3. 사이각\n(a) u = (1,1,1), v = (2,3,4) : " << vec1.Angle(vec2) << "\n";
	vec1.Reset(1, 1, 0); vec2.Reset(-2, 2, 0);
	cout << "(b) u = (1,1,0), v = (-2,2,0) : " << (double)vec1.Angle(vec2) << "\n";
	vec1.Reset(-1, -1, -1); vec2.Reset(3, 1, 0);
	cout << "(c) u = (-1,-1,-1), v = (3,1,0) : " << vec1.Angle(vec2) << "\n\n";

	vec1.Reset(0, 0, 0); vec2.Reset(0, 1, 3); vec3.Reset(5, 1, 0);
	cout << "4. 삼각형에 수직인 벡터\nA=(0,0,0), B=(0,1,3), C = (5,1,0) : (";
	
	cVector3 vec4(vec2.operator-(vec1)); cVector3 vec5(vec3.operator-(vec1));
	cout << vec4.Cross(vec5) <<")\n";

	return 0;
}