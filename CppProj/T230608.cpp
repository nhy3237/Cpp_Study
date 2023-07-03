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
	Q1. 점 p0(x0, y0)로 부터 점 p1(x1, y1) 까지의 직선이
		주어졌을 때 점 p2(x2, y2)가 선의 왼쪽 또는 오른쪽에
		있는지 판단할 수 있다.

		점 p0, p1, p2를 입력받아 점 p2가 어디에 위치하는지
		판단하는 프로그램을 작성하라.
		ex1> p0, p1, p2 : 4.4 2 6.5 9.5 -5 4
			p2는 선의 왼쪽에 있다.
		ex2> p0, p1, p2 : 1 1 5 5 2 2
			p2는 선상에 있다.
		ex3> p0, p1, p2 : 3.4 2 6.5 9.5 5 2.5
			p2는 선의 오른쪽에 있다. */

	XY xy0, xy1, xy2;
	double a, b; // 기울기, y절편

	cout << "p0, p1, p2 : ";
	cin >> xy0.x >> xy0.y >> xy1.x >> xy1.y >> xy2.x >> xy2.y;

	a = (xy1.y - xy0.y) / (xy1.x - xy0.x);
	b = xy0.y - a * xy0.x;

	if (a > 0)
	{
		if (a * xy2.x + b > xy2.y)
		{
			cout << "p2는 선의 오른쪽에 있다.\n";
		}
		else if (a * xy2.x + b < xy2.y)
		{
			cout << "p2는 선의 왼쪽에 있다.\n";
		}
		else
		{
			cout << "p2는 선의 선상에 있다.\n";
		}
	}
	else if (a < 0)
	{
		if (a * xy2.x + b < xy2.y)
		{
			cout << "p2는 선의 오른쪽에 있다.\n";
		}
		else if (a * xy2.x + b > xy2.y)
		{
			cout << "p2는 선의 왼쪽에 있다.\n";
		}
		else
		{
			cout << "p2는 선의 선상에 있다.\n";
		}
	}

	/*
	Q2. 임의의 한 단어를 생성하고 사용자가 한 번에
		한 문자만을 추측하도록 해서 단어를 맞추는 게임.
		단어의 각 문자는 '*'으로 표시된다.
		사용자가 올바른 추측을 했을 때는 실제 문자가 화면에
		표시된다.
		사용자가 단어 맞추기를 끝냈을 때 실수한 횟수를
		표시하고, 다른 단어로 계속할 것인지를 묻도록 한다.
		ex> 생성된 단어 -> apple
			단어 중 한 글자를 입력하시오. ***** > a
										a****
			단어 중 한 글자를 입력하시오. a**** > r
			r은 단어에 포함되지 않습니다.
			단어 중 한 글자를 입력하시오. a**** > a
			a는 이미 단어에 포함되어 있습니다.
		....
		총 xx번 실패, 00번 만에 정답 ! apple */
	//string str1, str2;
	//char c;
	//int sCnt, aCnt = 0, fail = 0, chk, eql; // 별 없는지, 몇 번만에 정답인지, 실패 횟수, 한 번 맞을 때 체크, 이미 있는지 체크

	//cout << "생성된 단어 -> ";
	//cin >> str1;
	//str2 = str1;

	//for (int i = 0; i < str1.size(); i++)
	//{
	//	str2[i] = '*';
	//}

	//while (1)
	//{
	//	sCnt = 0; chk = 0; eql = 0;
	//	cout << "단어 중 한 글자를 입력하시오. ";
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
	//		cout << " " << c << "(은)는 이미 단어에 포함되어 있습니다.\n";
	//		fail++; aCnt++;
	//	}
	//	else
	//	{
	//		cout << " " << c << "(은)는 단어에 포함되지 않습니다.\n";
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
	//cout << "총 " << fail << "번 실패, " << aCnt << "번 만에 정답 ! " << str2 << endl;
	return 0;
}