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

	cout << "�� ���� �Է��Ͻʽÿ�: ";

	while (cin >> x >> y)
	{
		try {
			z = hmean(x, y);
		}
		catch (const char* s)
		{
			cout << s << endl;
			cout << "�� ���� ���� �Է��Ͻʽÿ�: ";
			continue;
		}
		cout << x << ", " << y << "�� ��ȭ����� "
			<< z << "�Դϴ�.\n";
		cout << "�ٸ� �� ���� �Է��Ͻʽÿ�(�������� q): ";
	}
	cout << "���α׷��� �����մϴ�.\n";*/

	/*double x, y, z;

	cout << "�� ���� �Է��Ͻʽÿ�: ";
	while (cin >> x >> y)
	{
		try {
			z = hmean(x, y);
			cout << x << ", " << y << "�� ��ȭ����� "
				<< z << "�Դϴ�.\n";
			cout << x << ", " << y << "�� ��������� "
				<< gmean(x, y) << "�Դϴ�.\n";
			cout << "�ٸ� �� ���� �Է��Ͻʽÿ�(�������� q): ";
		}
		catch (bad_hmean& bg)
		{
			bg.mesg();
			cout << "�ٽ� �Ͻʽÿ�.\n";
			continue;
		}
		catch (bad_gmean& hg)
		{
			cout << hg.mesg();
			cout << "Values used: " << hg.v1 << ", "
				<< hg.v2 << endl;
			cout << "�˼��մϴ�. �� �̻� ������ �� �����ϴ�.\n";
			break;
		}
	}
	cout << "���α׷��� �����մϴ�.\n";*/

	Big* pb;
	try {
		cout << "ū �޸� ��� ������ ��û�ϰ� �ֽ��ϴ�.\n";
		pb = new Big[1000000];
		cout << "�޸� ��� ���� ��û�� �źεǾ����ϴ�.\n";
	}
	catch (bad_alloc& ba)
	{
		cout << "���ܰ� �����Ǿ����ϴ�.\n";
		cout << ba.what() << endl;
		exit(EXIT_FAILURE);
	}
	cout << "�޸� ����� ���������� ���ԵǾ����ϴ�.\n";
	pb[0].stuff[0] = 4;
	cout << pb[0].stuff[0] << endl;
	delete[]pb;
	return 0;
}

double hmean(double a, double b)
{
	if (a == -b)
		//throw "�߸��� hmean() �Ű�����: a = -b�� ������ �ʽ��ϴ�.";
		throw bad_hmean(a, b);
	return 2.0 * a * b / (a + b);
}

double gmean(double a, double b)
{
	if (a < 0 || b <0)
		throw bad_gmean(a, b);
	return sqrt(a * b);
}