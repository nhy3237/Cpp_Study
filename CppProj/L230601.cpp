#include <iostream>
#include <cmath>

struct polar
{
	double distance;
	double angle;
};

struct rect
{
	double x;
	double y;
};

const int ArSize = 8;

const int Len = 66;
const int Divs = 6;

int sum_arr(const int* begin, const int* end);
unsigned int c_in_str(const char* str, char ch);

polar rect_to_polar(rect xypos);
void show_polar(polar dapos);

void countdown(int n);
void subdivide(char ar[], int low, int high, int level);

int main()
{
	using namespace std;
	int cookies[ArSize] = { 1,2,4,8,16,32,64,128 };

	int sum = sum_arr(cookies, cookies + ArSize);
	cout << "���� ���� �� �հ�: " << sum << endl;
	sum = sum_arr(cookies, cookies + 3);
	cout << "ó�� �� ����� ���� " << sum << "���� �Ծ����ϴ�.\n";
	sum = sum_arr(cookies + 4, cookies + 8);
	cout << "������ �� ����� ���� " << sum << "���� �Ծ����ϴ�.\n\n";

	char mmm[15] = "minimum";
	const char* wail = "ululate";

	unsigned int ms = c_in_str(mmm, 'm');
	unsigned int us = c_in_str(wail, 'u');
	cout << mmm << "���� m�� " << ms << "�� ��� �ֽ��ϴ�.\n";
	cout << wail << "���� u�� " << us << "�� ��� �ֽ��ϴ�.\n\n";

	// 7.12 ����ü �Ű������� ����ϴ� �Լ�
	rect rplace;
	polar pplace;

	cout << "x���� y���� �Է��Ͻʽÿ�: ";
	while (cin >> rplace.x >> rplace.y)
	{
		pplace = rect_to_polar(rplace);
		show_polar(pplace);
		cout << "x���� y���� �Է��Ͻʽÿ�(�������� q�� �Է�) : ";
	}
	cout << "���α׷��� �����մϴ�.\n\n";

	//7.16 ����Լ�
	countdown(4);

	char ruler[Len];
	int i;
	for (i = 1; i < Len - 2; i++)
	{
		ruler[i] = ' ';
	}
	ruler[Len - 1] = '\0';
	int max = Len - 2;
	int min = 0;
	ruler[min] = ruler[max] = '|';
	std::cout << ruler << std::endl;
	for (i = 1; i <= Divs; i++)
	{
		subdivide(ruler, min, max, i);
		std::cout << ruler << std::endl;
		for(int j=1;j<Len-2;j++)
		{
			ruler[j] = ' ';
		}
	}
	return 0;
}

int sum_arr(const int* begin, const int* end)
{
	const int* pt;
	int total = 0;

	for (pt = begin; pt != end; pt++)
	{
		total = total + *pt;
	}
	return total;
}

unsigned int c_in_str(const char* str, char ch)
{
	int count = 0;

	while (*str)
	{
		if (*str == ch)
		{
			count++;
		}
		str++;
	}
	return count;
}

polar rect_to_polar(rect xypos)
{
	using namespace std;
	polar answer;

	answer.distance =
		sqrt(xypos.x * xypos.x + xypos.y * xypos.y);
	answer.angle = atan2(xypos.y, xypos.x);
	return answer;
}

void show_polar(polar dapos)
{
	using namespace std;
	const double Rad_to_deg = 57.29577951;

	cout << "�Ÿ� = " << dapos.distance;
	cout << ", ���� = " << dapos.angle * Rad_to_deg;
	cout << "��\n";
}

void countdown(int n)
{
	using namespace std;
	cout << "ī��Ʈ �ٿ� ... " << n << endl;
	if (n > 0)
	{
		countdown(n - 1);
	}
	cout << n << ": Kaboom!\n";
}

void subdivide(char ar[], int low, int high, int level)
{
	if (level == 0)
	{
		return;
	}
	int mid = (high + low) / 2;
	ar[mid] = '|';
	subdivide(ar, low, mid, level - 1);
	subdivide(ar, mid, high, level - 1);
}