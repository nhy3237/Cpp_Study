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

	cout << "rats의 주소 = " << &rats;
	cout << ", rodents의 주소 = " << &rodents << endl;

	int bunnies = 50;
	rodents = bunnies;
	cout << "bunnies = " << bunnies;
	cout << ", rats = " << rats;
	cout << ", rodents = " << rodents << endl;

	cout << "bunnies의 주소 = " << &bunnies;
	cout << ", rodents의 주소 = " << &rodents << endl << endl;

	// 8.4 참조를 이용한 교환과 포인터를 이용한 교환
	int wallet1 = 3000;
	int wallet2 = 3500;

	cout << "지갑 1 = " << wallet1 << "원";
	cout << ", 지갑 2 = " << wallet2 << "원\n";

	cout << "참조를 이용하여 내용들을 교환:\n";
	swapr(wallet1, wallet2);
	cout << "지갑 1 = " << wallet1 << "원";
	cout << ", 지갑 2 = " << wallet2 << "원\n";

	cout << "포인터를 이용하여 내용들을 다시 교환:\n";
	swapp(&wallet1, &wallet2);
	cout << "지갑 1 = " << wallet1 << "원";
	cout << ", 지갑 2 = " << wallet2 << "원\n";

	cout << "값으로 전달하여 내용 교환 시도:\n";
	swapv(wallet1, wallet2);
	cout << "지갑 1 = " << wallet1 << "원";
	cout << ", 지갑 2 = " << wallet2 << "원\n";

	//
	string input;
	string copy;
	string result;
	
	/*cout << "문자열을 입력하시오: ";
	getline(cin, input);
	copy = input;
	cout << "입력한 문자열 " << input << endl;
	result = version1(input, "***");
	cout << "바뀐 문자열: " << result << endl;
	cout << "원래 문자열: " << input << endl;

	result = version2(input, "###");
	cout << "바뀐 문자열: " << result << endl;
	cout << "원래 문자열: " << input << endl;

	cout << "원래 문자열 재설정\n";
	input = copy;
	result = version3(input, "@@@");
	cout << "바뀐 문자열: " << result << endl;
	cout << "원래 문자열: " << input << endl;*/

	// left() 함수의 오버로딩
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
	cout << "컴파일러가 생성한 int형 교환기를 사용하면\n";
	Swap(i, j);
	cout << "이제 i, j = " << i << ", "<< j << ".\n";

	int d1[Lim] = { 0,7,0,4,1,7,7,6 };
	int d2[Lim] = { 0,6,2,0,1,9,6,9 };
	cout << "원본 배열:\n";
	Show(d1);
	Show(d2);
	Swap(d1, d2, Lim);
	cout << "교환된 배열\n";
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