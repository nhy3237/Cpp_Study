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

	cout << "원래의 리스트:\n";
	for_each(yadayada.begin(), yadayada.end(), outint);
	cout << endl;
	for_each(etcetera.begin(), etcetera.end(), outint);
	cout << endl;
	yadayada.remove_if(f100);
	etcetera.remove_if(TooBig<int>(200));
	cout << "정비된 리스트:\n";
	for_each(yadayada.begin(), yadayada.end(), outint);
	cout << endl;
	for_each(etcetera.begin(), etcetera.end(), outint);
	cout << endl << endl;


	int ar[LIM] = { 4,5,4,2,2,3,4,8,1,4 };
	list<int> la(ar, ar + LIM);
	list<int> lb(la);
	cout << "오리지널 리스트의 내용:\n\t";
	for_each(la.begin(), la.end(), Show);
	cout << endl;
	la.remove(4);
	cout << "remove() 메서드를 사용한 후:\n";
	cout << "la:\t";
	for_each(lb.begin(), lb.end(), Show);
	cout << endl;
	list<int>::iterator last;
	last = remove(lb.begin(), lb.end(), 4);
	cout << "remove() 함수를 사용한 후:\n";
	cout << "lb:\t";
	for_each(lb.begin(), lb.end(), Show);
	cout << endl;
	lb.erase(last, lb.end());
	cout << "erase() 메서드를 사용한 후:\n";
	cout << "lb:\t";
	for_each(lb.begin(), lb.end(), Show);
	cout << endl << endl;

	const char* state1 = "Florida";
	const char* state2 = "Kansas";
	const char* state3 = "Euphoria";
	int len = strlen(state2);
	cout << "루프 인덱스 증가:\n";
	int i;
	for (i = 1; i <= len; i++)
	{
		cout.write(state2, i) << endl;
	}

	cout << "루프 인덱스 감소:\n";
	for (i = len; i > 0; i--)
	{
		cout.write(state2, i) << endl;
	}

	cout << "문자열 길이 초과:\n";
	cout.write(state2, len + 5) << endl << endl;


	//cout.setf(ios_base::left, ios_base::adjustfield);
	//cout.setf(ios_base::showpos);
	//cout.setf(ios_base::showpoint);
	//cout.precision(3);

	//ios_base::fmtflags old = cout.setf(ios_base::scientific, ios_base::floatfield);
	//cout << "왼쪽 정렬:\n";
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

	//cout << "내부(internal) 정렬:\n";
	//for (n = 1; n <= 41; n += 10)
	//{
	//	cout.width(4);
	//	cout << n << "|";
	//	cout.width(12);
	//	cout << sqrt(double(n)) << "|\n";
	//}

	//cout.setf(ios_base::right, ios_base::adjustfield);
	//cout.setf(ios_base::fixed, ios_base::floatfield);
	//cout << "오른쪽 정렬:\n";
	//for (n = 1; n <= 41; n += 10)
	//{
	//	cout.width(4);
	//	cout << n << "|";
	//	cout.width(12);
	//	cout << sqrt(double(n)) << "|\n";
	//}
	//cout << endl;


	/*cout << "수를 입력하십시오: ";

	int sum = 0;
	int input;
	while (cin >> input)
	{
		sum += input;
		cout << input;
	}

	cout << "마지막으로 입력한 값 = " << input << endl;
	cout << "합계 = " << sum << endl << endl;*/


	/*char input[Limit];

	cout << "getline()이 처리할 문자열을 입력하십시오:\n";
	cin.getline(input, Limit, '#');
	cout << "다음과 같이 입력하셨습니다.\n";
	cout << input << "\n1단계 완료\n";

	char ch;
	cin.get(ch);
	cout << "다음 입력 문자는 " << ch << "입니다." << endl;
	if (ch != '\n')
		cin.ignore(Limit, '\n');
	cout << "get()이 처리할 문자열을 입력하십시오:\n";
	cin.get(input, Limit, '#');
	cout << "다음과 같이 입력하셨습니다.:\n";
	cout << input << "\n2단계 완료\n";

	cin.get(ch);
	cout << "다음 입력 문자는 " << ch << "입니다." << endl;*/


	/*string filename;
	cout << "새 파일을 위한 이름을 입력하십시오: ";
	cin >> filename;

	ofstream fout(filename.c_str());

	cout << "비밀 번호 노출에 주의하십시오.\n";
	cout << "비밀 번호를 입력하십시오: ";
	float secret;
	cin >> secret;
	fout << "귀하의 비밀 번호는 " << secret << "입니다.\n";
	fout.close();

	ifstream fin(filename.c_str());
	cout << filename << " 파일의 내용은 다음과 같습니다:\n";
	char ch;
	while(fin.get(ch))
	{
		cout << ch;
	}
	cout << "프로그램을 종료합니다.\n";
	fin.close();*/
	

	/*char ch;

	ifstream fin;
	fin.open(file);

	if (fin.is_open())
	{
		cout << file << " 파일의 현재 내용은 다음과 같습니다:\n";
		while (fin.get(ch))
			cout << ch;
		fin.close();
	}

	ofstream fout(file, ios_base::out | ios_base::app);
	if (!fout.is_open())
	{
		cerr << "출력을 위해 " << file << " 파일을 열 수 없습니다.\n";
		exit(EXIT_FAILURE);
	}

	cout << "새로운 손님 이름들을 입력하십시오(끝내려면 빈 줄 입력):\n";
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
		cout << file << " 파일의 개정된 내용은 다음과 같습니다:\n";
		while (fin.get(ch))
			cout << ch;
		fin.close();
	}
	cout << "프로그램을 종료합니다.\n";*/


	//planet pl;
	//cout << fixed << right;

	//ifstream fin;
	//fin.open(file, ios_base::in | ios_base::binary);

	//if (fin.is_open())
	//{
	//	cout << file << " 파일의 현재 내용은 다음과 같습니다:\n";
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
	//	cerr << "출력을 위해 " << file << " 파일을 열 수 없습니다.\n";
	//	exit(EXIT_FAILURE);
	//}

	//cout << "행성의 이름을 입력하십시오(끝내려면 빈 줄 입력):\n";
	//cin.get(pl.name, 20);
	//while (pl.name[0] != '\0')
	//{
	//	eatline();
	//	cout << "행성의 인구를 입력하십시오: ";
	//	cin >> pl.population;
	//	cout << "행성의 중력가속도를 입력하십시오: ";
	//	cin >> pl.g;
	//	eatline();
	//	fout.write((char*)&pl, sizeof pl);
	//	cout << "행성의 이름을 입력하십시오(끝내려면 빈 줄 입력):\n";
	//	cin.get(pl.name, 20);
	//}
	//fout.close();

	//fin.clear();

	//fin.open(file, ios_base::in | ios_base::binary);
	//if (fin.is_open())
	//{
	//	cout << file << " 파일의 개정된 내용은 다음과 같습니다:\n";
	//	while (fin.read((char*)&pl, sizeof pl))
	//	{
	//		cout << setw(20) << pl.name << ": "
	//			<< setprecision(0) << setw(12) << pl.population
	//			<< setprecision(2) << setw(6) << pl.g << endl;
	//	}
	//	fin.close();
	//}
	//cout << "프로그램을 종료합니다.\n";

	planet pl;
	cout << fixed;

	fstream finout;
	finout.open(file, ios_base::in | ios_base::out | ios_base::binary);

	int ct = 0;
	if (finout.is_open())
	{
		finout.seekg(0);
		cout << file << " 파일의 현재 내용은 다음과 같습니다:\n";
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
			cerr << file << " 파일을 읽다가 에러 발생.\n";
			exit(EXIT_FAILURE);
		}
	}
	else
	{
		cerr << file << " 파일을 열 수 없습니다. 종료.\n";
		exit(EXIT_FAILURE);
	}

	cout << "수정할 레코드 번호를 입력하십시오: ";
	long rec;
	cin >> rec;
	eatline();
	if (rec < 0 || rec >= ct)
	{
		cerr << "잘못된 레코드 번호입니다. 종료.\n";
		exit(EXIT_FAILURE);
	}
	streampos place = rec * sizeof pl;
	finout.seekg(place);
	if (finout.fail())
	{
		cerr << "레코드를 찾다가 에러 발생.\n";
		exit(EXIT_FAILURE);
	}

	finout.read((char*)&pl, sizeof pl);
	cout << "현재 레코드의 내용:\n";
	cout << rec << ": " << setw(LIM) << pl.name << ": "
		<< setprecision(0) << setw(12) << pl.population
		<< setprecision(2) << setw(6) << pl.g << endl;
	if (finout.eof())
		finout.clear();

	cout << "행성의 이름을 입력하십시오: ";
	cin.get(pl.name, LIM);
	eatline();
	cout << "행성의 인구를 입력하십시오: ";
	cin >> pl.population;
	cout << "행성의 중력가속도를 입력하십시오: ";
	cin >> pl.g;
	finout.seekp(place);
	finout.write((char*)&pl, sizeof pl) << flush;
	if (finout.fail())
	{
		cerr << "쓰다가 에러 발생.\n";
		exit(EXIT_FAILURE);
	}

	ct = 0;
	finout.seekg(0);
	cout << file << " 파일의 개정된 내용은 다음과 같습니다:\n";
	while (finout.read((char*)&pl, sizeof pl))
	{
		cout << ct++ << ": " << setw(LIM) << pl.name << ": "
			<< setprecision(0) << setw(12) << pl.population
			<< setprecision(2) << setw(6) << pl.g << endl;
	}
	finout.close();
	cout << "프로그램을 종료합니다.\n";
	return 0;
}

void Show(int v)
{
	cout << v << ' ';
}