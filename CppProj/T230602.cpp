#include <iostream>
#include <cmath>

using namespace std;

struct circle
{
	double radius; // 반지름
	int x0;
	int y0;
};

struct point
{
	int x;
	int y;
};

struct Line1
{
	double x1, y1, x2, y2;
};

struct Line2
{
	double x3, y3, x4, y4;
};

void circle_point(const circle* pCircle, point* pPoint);
void circle_point2(Line1* pLine1, Line2* pLine2);

int main()
{
	/*
	Q1. 점(x,y)를 입력 받아 그 점이 (x0, y0)를 중심으로 하고
		반지름 r인 원의 내부에 존재하는지 검사하는 프로그램을
		작성하라.
		ex>
			input > r : 10, x0 = 0, y0 = 0, x = 4, y = 5
			output > 점(4,5)는 중점이 (0,0)이고 반지름이 10인
					원 안에 있습니다.

					점(9,9) -> ?

		점이 내부에 존재하는지 검사하는 함수를 만들고,
		점(x,y) , (x0, y0) 를 인자로 넘겨줄 때 포인터 구조체를
		이용해서 만들어야 한다. */
		/*circle Circle;
		point Point;

		cout << "점(x, y)를 입력하십시오: ";
		cin >> Point.x >> Point.y;
		cout << "반지름 r과 중점(x0, y0)를 입력하십시오: ";
		cin >> Circle.radius >> Circle.x0 >> Circle.y0;

		circle_point(&Circle, &Point);*/

		/*
		Q2. 선1의 두 점(x1, y1)과 (x2, y2),
			선2의 두 점(x3, y3)과 (x4, y4)로 주어진
			두 선의 교차점을 구하는 프로그램을 작성하라.
			크래머 공식을 이용하라.
			ex > 점 4개 입력 : x1, y1, x2, y2, x3, y3, x4, y4
								2, 2, 5, -1.0, 4.0, 2.0, -1.0, -2.0\
				교차점은 (  ,  ) 이다.

				> 2, 2, 7, 6.0, 4.0, 2.0, -1.0, -2.0
				두 직선은 평행이다. */

	/*Line1 L1;
	Line2 L2;

	cout << "선1의 두 점(x1, y1)과 (x2, y2)을 입력하시오: ";
	cin >> L1.x1 >> L1.y1 >> L1.x2 >> L1.y2;
	cout << "선2의 두 점(x3, y3)과 (x4, y4)을 입력하시오: ";
	cin >> L2.x3 >> L2.y3 >> L2.x4 >> L2.y4;

	circle_point2(&L1, &L2);*/

	return 0;
}

void circle_point(const circle* pCircle, point* pPoint)
{
	cout << "점(" << pPoint->x << ", " << pPoint->y << ")는 중점이 (" << pCircle->x0\
		<< ", " << pCircle->y0 << ")이고 반지름이 " << pCircle->radius << "인 원 안에 ";

	if (sqrt(pow(pCircle->x0 - pPoint->x, 2) + pow(pCircle->y0 - pPoint->y, 2))\
		< pow(pCircle->radius, 2))
	{
		cout << "있습니다.";
	}
	else
	{
		cout << "없습니다.";
	} 
}

void circle_point2(Line1* pLine1, Line2* pLine2)
{
	double L1, L2, x, y;

	double A = pLine1->y2 - pLine1->y1;
	double B = pLine1->x1 - pLine1->x2;
	double C = pLine2->y4 - pLine2->y3;
	double D = pLine2->x3 - pLine2->x4;

	L1 = A * pLine1->x1 + B * pLine1->y1;
	L2 = C * pLine2->x3 + D * pLine2->y3;

	if ((A * D - B * C) == 0)
	{
		cout << "두 직선은 평행이다.";
	}
	else
	{
		x = (L1 * D - B * L2) / (A * D - B * C);
		y = (A * L2 - L1 * C) / (A * D - B * C);
		cout << "교차점은(" << x << ", " << y << ") 이다.";
	}
}