#include <iostream>
#include <list>
#include <iterator>
#include <algorithm>
#include <cmath>
#include <fstream>
#include <cstdlib>
#include <string>
#include <iomanip>
using namespace std;

template<class T>
class TooBig
{
private:
	T cutoff;
public:
	TooBig(const T& t) :cutoff(t) {}
	bool operator()(const T& v) { return v > cutoff; }
};

inline void eatline() { while (cin.get() != '\n')continue; }
void Show(int);
void outint(int n) { cout << n << ""; }

const int LIM = 20;
//const char* file = "guests.txt";
const int Limit = 255;
//const int LIM = 10;

//struct planet
//{
//	char name[20];
//	double population;
//	double g;
//};

struct planet
{
	char name[LIM];
	double population;
	double g;
};

const char* file = "planets.dat";

int main()
{
	TooBig<int> f100(100);
	int vals[10] = { 50,100,90,180,60,210,415,88,188,201 };
	list<int> yadayada(vals, vals + 10);
	list<int> etcetera(vals, vals + 10);

	cout << "������ ����Ʈ:\n";
	for_each(yadayada.begin(), yadayada.end(), outint);
	cout << endl;
	for_each(etcetera.begin(), etcetera.end(), outint);
	cout << endl;
	yadayada.remove_if(f100);
	etcetera.remove_if(TooBig<int>(200));
	cout << "����� ����Ʈ:\n";
	for_each(yadayada.begin(), yadayada.end(), outint);
	cout << endl;
	for_each(etcetera.begin(), etcetera.end(), outint);
	cout << endl << endl;


	int ar[LIM] = { 4,5,4,2,2,3,4,8,1,4 };
	list<int> la(ar, ar + LIM);
	list<int> lb(la);
	cout << "�������� ����Ʈ�� ����:\n\t";
	for_each(la.begin(), la.end(), Show);
	cout << endl;
	la.remove(4);
	cout << "remove() �޼��带 ����� ��:\n";
	cout << "la:\t";
	for_each(lb.begin(), lb.end(), Show);
	cout << endl;
	list<int>::iterator last;
	last = remove(lb.begin(), lb.end(), 4);
	cout << "remove() �Լ��� ����� ��:\n";
	cout << "lb:\t";
	for_each(lb.begin(), lb.end(), Show);
	cout << endl;
	lb.erase(last, lb.end());
	cout << "erase() �޼��带 ����� ��:\n";
	cout << "lb:\t";
	for_each(lb.begin(), lb.end(), Show);
	cout << endl << endl;

	const char* state1 = "Florida";
	const char* state2 = "Kansas";
	const char* state3 = "Euphoria";
	int len = strlen(state2);
	cout << "���� �ε��� ����:\n";
	int i;
	for (i = 1; i <= len; i++)
	{
		cout.write(state2, i) << endl;
	}

	cout << "���� �ε��� ����:\n";
	for (i = len; i > 0; i--)
	{
		cout.write(state2, i) << endl;
	}

	cout << "���ڿ� ���� �ʰ�:\n";
	cout.write(state2, len + 5) << endl << endl;


	//cout.setf(ios_base::left, ios_base::adjustfield);
	//cout.setf(ios_base::showpos);
	//cout.setf(ios_base::showpoint);
	//cout.precision(3);

	//ios_base::fmtflags old = cout.setf(ios_base::scientific, ios_base::floatfield);
	//cout << "���� ����:\n";
	//long n;
	//for (n = 1; n <= 41; n += 10)
	//{
	//	cout.width(4);
	//	cout << n << "|";
	//	cout.width(12);
	//	cout << sqrt(double(n)) << "|\n";
	//}

	//cout.setf(ios_base::internal, ios_base::adjustfield);
	//cout.setf(old, ios_base::floatfield);

	//cout << "����(internal) ����:\n";
	//for (n = 1; n <= 41; n += 10)
	//{
	//	cout.width(4);
	//	cout << n << "|";
	//	cout.width(12);
	//	cout << sqrt(double(n)) << "|\n";
	//}

	//cout.setf(ios_base::right, ios_base::adjustfield);
	//cout.setf(ios_base::fixed, ios_base::floatfield);
	//cout << "������ ����:\n";
	//for (n = 1; n <= 41; n += 10)
	//{
	//	cout.width(4);
	//	cout << n << "|";
	//	cout.width(12);
	//	cout << sqrt(double(n)) << "|\n";
	//}
	//cout << endl;


	/*cout << "���� �Է��Ͻʽÿ�: ";

	int sum = 0;
	int input;
	while (cin >> input)
	{
		sum += input;
		cout << input;
	}

	cout << "���������� �Է��� �� = " << input << endl;
	cout << "�հ� = " << sum << endl << endl;*/


	/*char input[Limit];

	cout << "getline()�� ó���� ���ڿ��� �Է��Ͻʽÿ�:\n";
	cin.getline(input, Limit, '#');
	cout << "������ ���� �Է��ϼ̽��ϴ�.\n";
	cout << input << "\n1�ܰ� �Ϸ�\n";

	char ch;
	cin.get(ch);
	cout << "���� �Է� ���ڴ� " << ch << "�Դϴ�." << endl;
	if (ch != '\n')
		cin.ignore(Limit, '\n');
	cout << "get()�� ó���� ���ڿ��� �Է��Ͻʽÿ�:\n";
	cin.get(input, Limit, '#');
	cout << "������ ���� �Է��ϼ̽��ϴ�.:\n";
	cout << input << "\n2�ܰ� �Ϸ�\n";

	cin.get(ch);
	cout << "���� �Է� ���ڴ� " << ch << "�Դϴ�." << endl;*/


	/*string filename;
	cout << "�� ������ ���� �̸��� �Է��Ͻʽÿ�: ";
	cin >> filename;

	ofstream fout(filename.c_str());

	cout << "��� ��ȣ ���⿡ �����Ͻʽÿ�.\n";
	cout << "��� ��ȣ�� �Է��Ͻʽÿ�: ";
	float secret;
	cin >> secret;
	fout << "������ ��� ��ȣ�� " << secret << "�Դϴ�.\n";
	fout.close();

	ifstream fin(filename.c_str());
	cout << filename << " ������ ������ ������ �����ϴ�:\n";
	char ch;
	while(fin.get(ch))
	{
		cout << ch;
	}
	cout << "���α׷��� �����մϴ�.\n";
	fin.close();*/
	

	/*char ch;

	ifstream fin;
	fin.open(file);

	if (fin.is_open())
	{
		cout << file << " ������ ���� ������ ������ �����ϴ�:\n";
		while (fin.get(ch))
			cout << ch;
		fin.close();
	}

	ofstream fout(file, ios_base::out | ios_base::app);
	if (!fout.is_open())
	{
		cerr << "����� ���� " << file << " ������ �� �� �����ϴ�.\n";
		exit(EXIT_FAILURE);
	}

	cout << "���ο� �մ� �̸����� �Է��Ͻʽÿ�(�������� �� �� �Է�):\n";
	string name;
	while (getline(cin, name) && name.size() > 0)
	{
		fout << name << endl;
	}
	fout.close();

	fin.clear();
	fin.open(file);
	if (fin.is_open())
	{
		cout << file << " ������ ������ ������ ������ �����ϴ�:\n";
		while (fin.get(ch))
			cout << ch;
		fin.close();
	}
	cout << "���α׷��� �����մϴ�.\n";*/


	//planet pl;
	//cout << fixed << right;

	//ifstream fin;
	//fin.open(file, ios_base::in | ios_base::binary);

	//if (fin.is_open())
	//{
	//	cout << file << " ������ ���� ������ ������ �����ϴ�:\n";
	//	while (fin.read((char*)&pl, sizeof pl))
	//	{
	//		cout << setw(20) << pl.name << ": "
	//			<< setprecision(0) << setw(12) << pl.population
	//			<< setprecision(2) << setw(6) << pl.g << endl;
	//	}
	//	fin.close();
	//}

	//ofstream fout(file, ios_base::out | ios_base::app | ios_base::binary);
	//if (!fout.is_open())
	//{
	//	cerr << "����� ���� " << file << " ������ �� �� �����ϴ�.\n";
	//	exit(EXIT_FAILURE);
	//}

	//cout << "�༺�� �̸��� �Է��Ͻʽÿ�(�������� �� �� �Է�):\n";
	//cin.get(pl.name, 20);
	//while (pl.name[0] != '\0')
	//{
	//	eatline();
	//	cout << "�༺�� �α��� �Է��Ͻʽÿ�: ";
	//	cin >> pl.population;
	//	cout << "�༺�� �߷°��ӵ��� �Է��Ͻʽÿ�: ";
	//	cin >> pl.g;
	//	eatline();
	//	fout.write((char*)&pl, sizeof pl);
	//	cout << "�༺�� �̸��� �Է��Ͻʽÿ�(�������� �� �� �Է�):\n";
	//	cin.get(pl.name, 20);
	//}
	//fout.close();

	//fin.clear();

	//fin.open(file, ios_base::in | ios_base::binary);
	//if (fin.is_open())
	//{
	//	cout << file << " ������ ������ ������ ������ �����ϴ�:\n";
	//	while (fin.read((char*)&pl, sizeof pl))
	//	{
	//		cout << setw(20) << pl.name << ": "
	//			<< setprecision(0) << setw(12) << pl.population
	//			<< setprecision(2) << setw(6) << pl.g << endl;
	//	}
	//	fin.close();
	//}
	//cout << "���α׷��� �����մϴ�.\n";

	planet pl;
	cout << fixed;

	fstream finout;
	finout.open(file, ios_base::in | ios_base::out | ios_base::binary);

	int ct = 0;
	if (finout.is_open())
	{
		finout.seekg(0);
		cout << file << " ������ ���� ������ ������ �����ϴ�:\n";
		while (finout.read((char*)&pl, sizeof pl))
		{
			cout << ct++ << ": " << setw(LIM) << pl.name << ": "
				<< setprecision(0) << setw(12) << pl.population
				<< setprecision(2) << setw(6) << pl.g << endl;
		}
		if (finout.eof())
			finout.clear();
		else
		{
			cerr << file << " ������ �дٰ� ���� �߻�.\n";
			exit(EXIT_FAILURE);
		}
	}
	else
	{
		cerr << file << " ������ �� �� �����ϴ�. ����.\n";
		exit(EXIT_FAILURE);
	}

	cout << "������ ���ڵ� ��ȣ�� �Է��Ͻʽÿ�: ";
	long rec;
	cin >> rec;
	eatline();
	if (rec < 0 || rec >= ct)
	{
		cerr << "�߸��� ���ڵ� ��ȣ�Դϴ�. ����.\n";
		exit(EXIT_FAILURE);
	}
	streampos place = rec * sizeof pl;
	finout.seekg(place);
	if (finout.fail())
	{
		cerr << "���ڵ带 ã�ٰ� ���� �߻�.\n";
		exit(EXIT_FAILURE);
	}

	finout.read((char*)&pl, sizeof pl);
	cout << "���� ���ڵ��� ����:\n";
	cout << rec << ": " << setw(LIM) << pl.name << ": "
		<< setprecision(0) << setw(12) << pl.population
		<< setprecision(2) << setw(6) << pl.g << endl;
	if (finout.eof())
		finout.clear();

	cout << "�༺�� �̸��� �Է��Ͻʽÿ�: ";
	cin.get(pl.name, LIM);
	eatline();
	cout << "�༺�� �α��� �Է��Ͻʽÿ�: ";
	cin >> pl.population;
	cout << "�༺�� �߷°��ӵ��� �Է��Ͻʽÿ�: ";
	cin >> pl.g;
	finout.seekp(place);
	finout.write((char*)&pl, sizeof pl) << flush;
	if (finout.fail())
	{
		cerr << "���ٰ� ���� �߻�.\n";
		exit(EXIT_FAILURE);
	}

	ct = 0;
	finout.seekg(0);
	cout << file << " ������ ������ ������ ������ �����ϴ�:\n";
	while (finout.read((char*)&pl, sizeof pl))
	{
		cout << ct++ << ": " << setw(LIM) << pl.name << ": "
			<< setprecision(0) << setw(12) << pl.population
			<< setprecision(2) << setw(6) << pl.g << endl;
	}
	finout.close();
	cout << "���α׷��� �����մϴ�.\n";
	return 0;
}

void Show(int v)
{
	cout << v << ' ';
}