#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main()
{
	/*
	Q1. Encoding
		���� ���� ��� ����Ʈ�� ���� ���� ���ϵ��� ������ ��ȣȭ �϶�.
		����ڰ� �Է� ���� �̸��� ��� ���� �̸��� �Է��ϸ�
		�Է� ������ ��ȣȭ�� ������ ��� ���Ϸ� �����ϴ� ���α׷��� �ۼ��϶�.
		ex > Input source filename : source.txt
			 Input encoding filename : encoding.txt
		������ ���� ���� encoding.txt�� �� �տ� �����ϵ��� �Ѵ�. */
	
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
		��ȣȭ�� ������ ��ȣȭ �ϴ� ���α׷��� �ۼ��϶�.
		����ڰ� �Է� ���� �̸��� ��� ���� �̸��� �Է��ϸ�
		�Է� ������ ��ȣ�� Ǯ�� ������ ��� ���Ͽ� �����϶�.
		ex > Input source filename : encoding.txt
				Input decoding filename : dest.txt
		�� �տ� ������ ���� ���� �о� decoding �ϵ��� �Ѵ�. */
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