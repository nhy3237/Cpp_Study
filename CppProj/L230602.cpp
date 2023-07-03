#include <iostream>
#include <string>

template <typename T>
void Swap(T& a, T& b);

template <typename T>
void Swap(T* a, T* b, int n);

void Show(int a[]);

const int Lim = 8;

using namespace std;

string version1(const string& s1, const string& s2);
const string& version2(string& s1, const string& s2);
const string& version3(string& s1, const string& s2);

void swapr(int& a, int& b);
void swapp(int* p, int *q);
void swapv(int a, int b);

unsigned long left(unsigned long num, unsigned ct);
char* left(const char* str, int n = 1);

int main()
{
	int rats = 101;
	int& rodents = rats;

	cout << "rats = " << rats;
	cout << ", rodents = " << rodents << endl;

	cout << "rats�� �ּ� = " << &rats;
	cout << ", rodents�� �ּ� = " << &rodents << endl;

	int bunnies = 50;
	rodents = bunnies;
	cout << "bunnies = " << bunnies;
	cout << ", rats = " << rats;
	cout << ", rodents = " << rodents << endl;

	cout << "bunnies�� �ּ� = " << &bunnies;
	cout << ", rodents�� �ּ� = " << &rodents << endl << endl;

	// 8.4 ������ �̿��� ��ȯ�� �����͸� �̿��� ��ȯ
	int wallet1 = 3000;
	int wallet2 = 3500;

	cout << "���� 1 = " << wallet1 << "��";
	cout << ", ���� 2 = " << wallet2 << "��\n";

	cout << "������ �̿��Ͽ� ������� ��ȯ:\n";
	swapr(wallet1, wallet2);
	cout << "���� 1 = " << wallet1 << "��";
	cout << ", ���� 2 = " << wallet2 << "��\n";

	cout << "�����͸� �̿��Ͽ� ������� �ٽ� ��ȯ:\n";
	swapp(&wallet1, &wallet2);
	cout << "���� 1 = " << wallet1 << "��";
	cout << ", ���� 2 = " << wallet2 << "��\n";

	cout << "������ �����Ͽ� ���� ��ȯ �õ�:\n";
	swapv(wallet1, wallet2);
	cout << "���� 1 = " << wallet1 << "��";
	cout << ", ���� 2 = " << wallet2 << "��\n";

	//
	string input;
	string copy;
	string result;
	
	/*cout << "���ڿ��� �Է��Ͻÿ�: ";
	getline(cin, input);
	copy = input;
	cout << "�Է��� ���ڿ� " << input << endl;
	result = version1(input, "***");
	cout << "�ٲ� ���ڿ�: " << result << endl;
	cout << "���� ���ڿ�: " << input << endl;

	result = version2(input, "###");
	cout << "�ٲ� ���ڿ�: " << result << endl;
	cout << "���� ���ڿ�: " << input << endl;

	cout << "���� ���ڿ� �缳��\n";
	input = copy;
	result = version3(input, "@@@");
	cout << "�ٲ� ���ڿ�: " << result << endl;
	cout << "���� ���ڿ�: " << input << endl;*/

	// left() �Լ��� �����ε�
	/*const char* trip = "Hawaii!!";
	unsigned long n = 12345678;
	int i;
	char* temp;

	for (i = 1; i < 10; i++)
	{
		cout << left(n, i) << endl;
		temp = left(trip, i);
		cout << temp << endl;

		delete[]temp;
	}*/

	int i = 10, j = 20;
	cout << "i, j = " << i << ", " << j << ".\n";
	cout << "�����Ϸ��� ������ int�� ��ȯ�⸦ ����ϸ�\n";
	Swap(i, j);
	cout << "���� i, j = " << i << ", "<< j << ".\n";

	int d1[Lim] = { 0,7,0,4,1,7,7,6 };
	int d2[Lim] = { 0,6,2,0,1,9,6,9 };
	cout << "���� �迭:\n";
	Show(d1);
	Show(d2);
	Swap(d1, d2, Lim);
	cout << "��ȯ�� �迭\n";
	Show(d1);
	Show(d2);

	return 0;
}

template <typename T>
void Swap(T& a, T& b)
{
	T temp;
	temp = a;
	a = b;
	b = temp;
}

template <typename T>
void Swap(T* a, T* b, int n)
{
	T temp;
	for (int i = 0; i < n; i++)
	{
		temp = a[i];
		a[i] = b[i];
		b[i] = temp;
	}
}

void Show(int a[])
{
	using namespace std;
	cout << a[0] << a[1] << "/";
	cout << a[2] << a[3] << "/";
	for (int i = 4; i < Lim; i++)
	{
		cout << a[i];
	}
	cout << endl;
}
unsigned long left(unsigned long num, unsigned ct)
{
	unsigned digits = 1;
	unsigned long n = num;

	if (ct == 0 || num == 0)
	{
		return 0;
	}
	while (n /= 10)
	{
		digits++;
	}
	if (digits > ct)
	{
		ct = digits - ct;
		while (ct--)
		{
			num /= 10;
		}
		return num;
	}
	else
	{
		return num;
	}
}

char* left(const char* str, int n)
{
	if (n < 0)
	{
		n = 0;
	}
	char* p = new char[n + 1];
	int i;
	for (i = 0; i < n && str[i]; i++)
	{
		p[i] = str[i];
	}
	while (i <= n)
	{
		p[i++] = '\0';
	}
	return p;
}

string version1(const string& s1, const string& s2)
{
	string temp;

	temp = s2 + s2 + s2;
	return temp;
}

const string& version2(string& s1, const string& s2)
{
	s1 = s2 + s1 + s2;
	return s1;
}

const string& version3(string& s1, const string& s2)
{
	string temp;
	temp = s2 + s1 + s2;
	return temp;
}

void swapr(int& a, int& b)
{
	int temp;

	temp = a;
	a = b;
	b = temp;
}

void swapp(int* p, int* q)
{
	int temp;

	temp = *p;
	*p = *q;
	*q = temp;
}

void swapv(int a, int b)
{
	int temp;

	temp = a;
	a = b;
	b = temp;
}