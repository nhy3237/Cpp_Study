#include <iostream>
#include <cmath>

using namespace std;

struct circle
{
	double radius; // ������
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
	Q1. ��(x,y)�� �Է� �޾� �� ���� (x0, y0)�� �߽����� �ϰ�
		������ r�� ���� ���ο� �����ϴ��� �˻��ϴ� ���α׷���
		�ۼ��϶�.
		ex>
			input > r : 10, x0 = 0, y0 = 0, x = 4, y = 5
			output > ��(4,5)�� ������ (0,0)�̰� �������� 10��
					�� �ȿ� �ֽ��ϴ�.

					��(9,9) -> ?

		���� ���ο� �����ϴ��� �˻��ϴ� �Լ��� �����,
		��(x,y) , (x0, y0) �� ���ڷ� �Ѱ��� �� ������ ����ü��
		�̿��ؼ� ������ �Ѵ�. */
		/*circle Circle;
		point Point;

		cout << "��(x, y)�� �Է��Ͻʽÿ�: ";
		cin >> Point.x >> Point.y;
		cout << "������ r�� ����(x0, y0)�� �Է��Ͻʽÿ�: ";
		cin >> Circle.radius >> Circle.x0 >> Circle.y0;

		circle_point(&Circle, &Point);*/

		/*
		Q2. ��1�� �� ��(x1, y1)�� (x2, y2),
			��2�� �� ��(x3, y3)�� (x4, y4)�� �־���
			�� ���� �������� ���ϴ� ���α׷��� �ۼ��϶�.
			ũ���� ������ �̿��϶�.
			ex > �� 4�� �Է� : x1, y1, x2, y2, x3, y3, x4, y4
								2, 2, 5, -1.0, 4.0, 2.0, -1.0, -2.0\
				�������� (  ,  ) �̴�.

				> 2, 2, 7, 6.0, 4.0, 2.0, -1.0, -2.0
				�� ������ �����̴�. */

	/*Line1 L1;
	Line2 L2;

	cout << "��1�� �� ��(x1, y1)�� (x2, y2)�� �Է��Ͻÿ�: ";
	cin >> L1.x1 >> L1.y1 >> L1.x2 >> L1.y2;
	cout << "��2�� �� ��(x3, y3)�� (x4, y4)�� �Է��Ͻÿ�: ";
	cin >> L2.x3 >> L2.y3 >> L2.x4 >> L2.y4;

	circle_point2(&L1, &L2);*/

	return 0;
}

void circle_point(const circle* pCircle, point* pPoint)
{
	cout << "��(" << pPoint->x << ", " << pPoint->y << ")�� ������ (" << pCircle->x0\
		<< ", " << pCircle->y0 << ")�̰� �������� " << pCircle->radius << "�� �� �ȿ� ";

	if (sqrt(pow(pCircle->x0 - pPoint->x, 2) + pow(pCircle->y0 - pPoint->y, 2))\
		< pow(pCircle->radius, 2))
	{
		cout << "�ֽ��ϴ�.";
	}
	else
	{
		cout << "�����ϴ�.";
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
		cout << "�� ������ �����̴�.";
	}
	else
	{
		x = (L1 * D - B * L2) / (A * D - B * C);
		y = (A * L2 - L1 * C) / (A * D - B * C);
		cout << "��������(" << x << ", " << y << ") �̴�.";
	}
}