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
	Q1. p.1343 문제 7 로또 복권
		번호는 1부터 45 사이 임의의 6자리
		
	vector<int> winners;
	winners = Lotto(45, 6);

	for_each(winners.begin(), winners.end(), Show);*/

	/*
	Q2. 용량이 큰 파일을 작은 용량으로 분할해서 작은 단위의 파일로 나누는
		프로그램을 작성하라.
		사용자로부터 소스 파일명을 입력 받은 후,
		각각 분할된 작은 파일의 바이트 값을 입력 받아야 한다.
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
	Q3. 사용자로부터 소스 파일의 개수, 소스 파일의 이름, 목적 파일의 이름을 입력받아
		새로운 하나의 파일로 파일들을 조합하는 프로그램을 작성하라.
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