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

	cout << "�ڵ��� ����Ŀ�� ������ �Է��Ͻÿ�: ";
	cin.getline(automobile, 50);
	cout << "������ �Է��Ͻÿ�: ";
	cin >> year;
	cout << "���� ������ �Է��Ͻÿ�: ";
	cin >> a_price;
	d_price = 0.913 * a_price;

	cout << fixed;
	cout.precision(2);
	cout.setf(ios_base::showpoint);
	cout << "����Ŀ�� ����: " << automobile << endl;
	cout << "����: " << year << endl;
	cout << "���� ����$ " << a_price << endl;
	cout << "���� ����$ " << d_price << endl;

	outFile << fixed;
	outFile.precision(2);
	outFile.setf(ios_base::showpoint);
	outFile << "����Ŀ�� ����: " << automobile << endl;
	outFile << "����: " << year << endl;
	outFile << "���� ����$ " << a_price << endl;
	outFile << "���� ����$ " << d_price << endl;

	outFile.close();*/

	char filename[SIZE];
	ifstream infile;
	cout << "������ ������ �̸��� �Է��Ͻʽÿ�: ";
	cin.getline(filename, SIZE);
	infile.open(filename);
	if (!infile.is_open())
	{
		cout << filename << " ������ �� �� �����ϴ�." << endl;
		cout << "���α׷��� �����մϴ�\n";
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
		cout << "���� ���� �����߽��ϴ�.\n";
	}
	else if (infile.fail())
	{
		cout << "������ ����ġ�� �Է��� ����Ǿ����ϴ�.\n";
	}
	else
	{
		cout << "�� �� ���� ������ �Է��� ����Ǿ����ϴ�.\n";
	}

	if (count == 0)
	{
		cout << "�����Ͱ� �����ϴ�.\n";
	}
	else
	{
		cout << "���� �׸��� ����: " << count << endl;
		cout << "�հ�: " << sum << endl;
		cout << "���: " << sum / count << endl;
	}
	infile.close();
	return 0;
}

