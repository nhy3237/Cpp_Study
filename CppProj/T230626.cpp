#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main()
{
	/*
	Q1. Encoding
		파일 내의 모든 바이트에 임의 수를 더하도록 파일을 부호화 하라.
		사용자가 입력 파일 이름과 출력 파일 이름을 입력하면
		입력 파일의 암호화된 버전을 출력 파일로 저장하는 프로그램을 작성하라.
		ex > Input source filename : source.txt
			 Input encoding filename : encoding.txt
		더해진 임의 수를 encoding.txt의 맨 앞에 기입하도록 한다. */
	
	/*char ch; int key = 3;
	string finName, finStr, foutName;

	cout << "Input source filename : ";
	cin >> finName;
	cout << "Input encoding filename : ";
	cin >> foutName;

	ifstream fin;
	fin.open(finName);

	if (fin.is_open())
	{
		while (fin.get(ch))
			finStr += ch;
		fin.close();
	}

	ofstream fout(foutName);
	for (int i = 0; i < finStr.size(); i++)
	{
		ch = finStr[i] + key;
		fout << ch;
		//cout << char(ch - key);
	}
	fout.close();*/
	

	/*
	Q2. Decoding
		암호화된 파일을 복호화 하는 프로그램을 작성하라.
		사용자가 입력 파일 이름과 출력 파일 이름을 입력하면
		입력 파일의 암호과 풀린 버전을 출력 파일에 저장하라.
		ex > Input source filename : encoding.txt
				Input decoding filename : dest.txt
		맨 앞에 더해진 임의 수를 읽어 decoding 하도록 한다. */
	char ch; int key = 3;
	string finName, finStr, foutName, foutStr;

	cout << "Input source filename : ";
	cin >> finName;
	cout << "Input decoding filename : ";
	cin >> foutName;

	ifstream fin;
	fin.open(finName);

	if (fin.is_open())
	{
		while (fin.get(ch))
			finStr += ch;
		fin.close();
	}

	ofstream fout(foutName);
	for (int i = 0; i < finStr.size(); i++)
	{
		fout << char(finStr[i] - key);
		//cout << char(finStr[i] - key);
	}
	fout.close();

	return 0;
}