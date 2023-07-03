#include <iostream>
#include <fstream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;

vector<int> Lotto(int max, int n);
void Show(int v);

int main()
{ 
	/*
	Q1. p.1343 ���� 7 �ζ� ����
		��ȣ�� 1���� 45 ���� ������ 6�ڸ�
		
	vector<int> winners;
	winners = Lotto(45, 6);

	for_each(winners.begin(), winners.end(), Show);*/

	/*
	Q2. �뷮�� ū ������ ���� �뷮���� �����ؼ� ���� ������ ���Ϸ� ������
		���α׷��� �ۼ��϶�.
		����ڷκ��� �ҽ� ���ϸ��� �Է� ���� ��,
		���� ���ҵ� ���� ������ ����Ʈ ���� �Է� �޾ƾ� �Ѵ�.
		ex> Enter file name : test.zip
			Enter file size : 1024
				-> file test.zip.01
				-> file test.zip.02
				-> file test.zip.03
				-> file test.zip.04
				....
				Split Done. */
	string filename;
	int size;

	cout << "Enter file name : ";
	cin >> filename;
	cout << "Enter file size : ";
	cin >> size;
	cout << "-> file ";
	cout << "Split Done.";

	ofstream fout(filename.c_str());
	
	/*
	Q3. ����ڷκ��� �ҽ� ������ ����, �ҽ� ������ �̸�, ���� ������ �̸��� �Է¹޾�
		���ο� �ϳ��� ���Ϸ� ���ϵ��� �����ϴ� ���α׷��� �ۼ��϶�.
		ex > Enter file number : 4
			 Enter source file : test.zip.01
			 Enter source file : test.zip.02
			 Enter source file : test.zip.03
			 Enter source file : test.zip.04
			 Enter target file : Dest.zip
			 ....
			 Combine Done. */
}

vector<int> Lotto(int max, int n)
{
	vector<int> lotto;
	for (int i = 1; i <= max; i++)
	{
		lotto.push_back(i);
	}
	srand(time(NULL));
	random_shuffle(lotto.begin(), lotto.end());

	lotto.erase(lotto.begin() + 6, lotto.end());

	return lotto;
}

void Show(int v)
{
	cout << v << ' ';
}