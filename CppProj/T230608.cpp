#include <iostream>
#include <cstring>

using namespace std;

struct XY
{
	double x, y;
};

int main()
{
	/*
	Q1. �� p0(x0, y0)�� ���� �� p1(x1, y1) ������ ������
		�־����� �� �� p2(x2, y2)�� ���� ���� �Ǵ� �����ʿ�
		�ִ��� �Ǵ��� �� �ִ�.

		�� p0, p1, p2�� �Է¹޾� �� p2�� ��� ��ġ�ϴ���
		�Ǵ��ϴ� ���α׷��� �ۼ��϶�.
		ex1> p0, p1, p2 : 4.4 2 6.5 9.5 -5 4
			p2�� ���� ���ʿ� �ִ�.
		ex2> p0, p1, p2 : 1 1 5 5 2 2
			p2�� ���� �ִ�.
		ex3> p0, p1, p2 : 3.4 2 6.5 9.5 5 2.5
			p2�� ���� �����ʿ� �ִ�. */

	XY xy0, xy1, xy2;
	double a, b; // ����, y����

	cout << "p0, p1, p2 : ";
	cin >> xy0.x >> xy0.y >> xy1.x >> xy1.y >> xy2.x >> xy2.y;

	a = (xy1.y - xy0.y) / (xy1.x - xy0.x);
	b = xy0.y - a * xy0.x;

	if (a > 0)
	{
		if (a * xy2.x + b > xy2.y)
		{
			cout << "p2�� ���� �����ʿ� �ִ�.\n";
		}
		else if (a * xy2.x + b < xy2.y)
		{
			cout << "p2�� ���� ���ʿ� �ִ�.\n";
		}
		else
		{
			cout << "p2�� ���� ���� �ִ�.\n";
		}
	}
	else if (a < 0)
	{
		if (a * xy2.x + b < xy2.y)
		{
			cout << "p2�� ���� �����ʿ� �ִ�.\n";
		}
		else if (a * xy2.x + b > xy2.y)
		{
			cout << "p2�� ���� ���ʿ� �ִ�.\n";
		}
		else
		{
			cout << "p2�� ���� ���� �ִ�.\n";
		}
	}

	/*
	Q2. ������ �� �ܾ �����ϰ� ����ڰ� �� ����
		�� ���ڸ��� �����ϵ��� �ؼ� �ܾ ���ߴ� ����.
		�ܾ��� �� ���ڴ� '*'���� ǥ�õȴ�.
		����ڰ� �ùٸ� ������ ���� ���� ���� ���ڰ� ȭ�鿡
		ǥ�õȴ�.
		����ڰ� �ܾ� ���߱⸦ ������ �� �Ǽ��� Ƚ����
		ǥ���ϰ�, �ٸ� �ܾ�� ����� �������� ������ �Ѵ�.
		ex> ������ �ܾ� -> apple
			�ܾ� �� �� ���ڸ� �Է��Ͻÿ�. ***** > a
										a****
			�ܾ� �� �� ���ڸ� �Է��Ͻÿ�. a**** > r
			r�� �ܾ ���Ե��� �ʽ��ϴ�.
			�ܾ� �� �� ���ڸ� �Է��Ͻÿ�. a**** > a
			a�� �̹� �ܾ ���ԵǾ� �ֽ��ϴ�.
		....
		�� xx�� ����, 00�� ���� ���� ! apple */
	//string str1, str2;
	//char c;
	//int sCnt, aCnt = 0, fail = 0, chk, eql; // �� ������, �� ������ ��������, ���� Ƚ��, �� �� ���� �� üũ, �̹� �ִ��� üũ

	//cout << "������ �ܾ� -> ";
	//cin >> str1;
	//str2 = str1;

	//for (int i = 0; i < str1.size(); i++)
	//{
	//	str2[i] = '*';
	//}

	//while (1)
	//{
	//	sCnt = 0; chk = 0; eql = 0;
	//	cout << "�ܾ� �� �� ���ڸ� �Է��Ͻÿ�. ";
	//	cout << str2 << " > ";
	//	cin >> c;

	//	for (int i = 0; i < str1.size(); i++)
	//	{
	//		if (str1[i] == c)
	//		{
	//			if (str2[i] == c)
	//			{
	//				eql++; break;
	//			}
	//			str2[i] = c;
	//			chk++;
	//		}
	//	}
	//	
	//	if (chk > 0)
	//	{
	//		cout << "\t\t\t      " << str2 << endl;
	//		aCnt++;
	//	}
	//	else if (eql > 0)
	//	{
	//		cout << " " << c << "(��)�� �̹� �ܾ ���ԵǾ� �ֽ��ϴ�.\n";
	//		fail++; aCnt++;
	//	}
	//	else
	//	{
	//		cout << " " << c << "(��)�� �ܾ ���Ե��� �ʽ��ϴ�.\n";
	//		fail++; aCnt++; 
	//	}
	//	
	//	for (int i = 0; i < str2.size(); i++)
	//	{
	//		if (str2[i] != '*')
	//		{
	//			sCnt++;
	//		}
	//		else
	//		{
	//			continue;
	//		}
	//	}
	//	if (sCnt == str1.size()) break;
	//}
	//cout << "�� " << fail << "�� ����, " << aCnt << "�� ���� ���� ! " << str2 << endl;
	return 0;
}