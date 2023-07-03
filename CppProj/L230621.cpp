#include <iostream>
#include <cmath>
#include <new>
#include <cstdlib>
#include "exc_mean.h"
using namespace std;

double hmean(double a, double b);

double hmean(double a, double b)throw(bad_hmean);
double gmean(double a, double b)throw(bad_gmean);

struct Big
{
	double stuff[20000];
};

int main()
{
	/*double x, y, z;

	cout << "두 수를 입력하십시오: ";

	while (cin >> x >> y)
	{
		try {
			z = hmean(x, y);
		}
		catch (const char* s)
		{
			cout << s << endl;
			cout << "두 수를 새로 입력하십시오: ";
			continue;
		}
		cout << x << ", " << y << "의 조화평균은 "
			<< z << "입니다.\n";
		cout << "다른 두 수를 입력하십시오(끝내려면 q): ";
	}
	cout << "프로그램을 종료합니다.\n";*/

	/*double x, y, z;

	cout << "두 수를 입력하십시오: ";
	while (cin >> x >> y)
	{
		try {
			z = hmean(x, y);
			cout << x << ", " << y << "의 조화평균은 "
				<< z << "입니다.\n";
			cout << x << ", " << y << "의 기하평균은 "
				<< gmean(x, y) << "입니다.\n";
			cout << "다른 두 수를 입력하십시오(끝내려면 q): ";
		}
		catch (bad_hmean& bg)
		{
			bg.mesg();
			cout << "다시 하십시오.\n";
			continue;
		}
		catch (bad_gmean& hg)
		{
			cout << hg.mesg();
			cout << "Values used: " << hg.v1 << ", "
				<< hg.v2 << endl;
			cout << "죄송합니다. 더 이상 진행할 수 없습니다.\n";
			break;
		}
	}
	cout << "프로그램을 종료합니다.\n";*/

	Big* pb;
	try {
		cout << "큰 메모리 블록 대입을 요청하고 있습니다.\n";
		pb = new Big[1000000];
		cout << "메모리 블록 대입 요청이 거부되었습니다.\n";
	}
	catch (bad_alloc& ba)
	{
		cout << "예외가 감지되었습니다.\n";
		cout << ba.what() << endl;
		exit(EXIT_FAILURE);
	}
	cout << "메모리 블록이 성공적으로 대입되었습니다.\n";
	pb[0].stuff[0] = 4;
	cout << pb[0].stuff[0] << endl;
	delete[]pb;
	return 0;
}

double hmean(double a, double b)
{
	if (a == -b)
		//throw "잘못된 hmean() 매개변수: a = -b는 허용되지 않습니다.";
		throw bad_hmean(a, b);
	return 2.0 * a * b / (a + b);
}

double gmean(double a, double b)
{
	if (a < 0 || b <0)
		throw bad_gmean(a, b);
	return sqrt(a * b);
}