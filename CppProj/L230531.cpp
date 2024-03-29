#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <fstream>
#include <cstdlib>

const int SIZE = 60;
using namespace std;

int main()
{	
	/*ofstream outfile;
	outfile.open("ccc.txt");
	outfile << "adsfasdfasd" << endl;
	outfile.close();*/

	/*ifstream infile;
	string str;
	infile >> str;

	infile.close();*/

	/*char automobile[50];
	int year;
	double a_price, d_price;

	ofstream outFile;
	outFile.open("carinfo.txt");

	cout << "자동차 메이커와 차종을 입력하시오: ";
	cin.getline(automobile, 50);
	cout << "연식을 입력하시오: ";
	cin >> year;
	cout << "구입 가격을 입력하시오: ";
	cin >> a_price;
	d_price = 0.913 * a_price;

	cout << fixed;
	cout.precision(2);
	cout.setf(ios_base::showpoint);
	cout << "메이커와 차종: " << automobile << endl;
	cout << "연식: " << year << endl;
	cout << "구입 가격$ " << a_price << endl;
	cout << "현재 가격$ " << d_price << endl;

	outFile << fixed;
	outFile.precision(2);
	outFile.setf(ios_base::showpoint);
	outFile << "메이커와 차종: " << automobile << endl;
	outFile << "연식: " << year << endl;
	outFile << "구입 가격$ " << a_price << endl;
	outFile << "현재 가격$ " << d_price << endl;

	outFile.close();*/

	char filename[SIZE];
	ifstream infile;
	cout << "데이터 파일의 이름을 입력하십시오: ";
	cin.getline(filename, SIZE);
	infile.open(filename);
	if (!infile.is_open())
	{
		cout << filename << " 파일을 열 수 없습니다." << endl;
		cout << "프로그램을 종료합니다\n";
		exit(EXIT_FAILURE);
	}
	double value;
	double sum = 0.0;
	int count = 0;
	
	infile >> value;
	while (infile.good())
	{
		++count;
		sum += value;
		infile >> value;
	}
	if (infile.eof())
	{
		cout << "파일 끝에 도달했습니다.\n";
	}
	else if (infile.fail())
	{
		cout << "데이터 불일치로 입력이 종료되었습니다.\n";
	}
	else
	{
		cout << "알 수 없는 이유로 입력이 종료되었습니다.\n";
	}

	if (count == 0)
	{
		cout << "데이터가 없습니다.\n";
	}
	else
	{
		cout << "읽은 항목의 개수: " << count << endl;
		cout << "합계: " << sum << endl;
		cout << "평균: " << sum / count << endl;
	}
	infile.close();
	return 0;
}

