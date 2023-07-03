#include <iostream>
#include <cmath>

using namespace std;

int main()
{
	/*
	Q1. 다음과 같은 형태로 출력하는 프로그램을 작성하라.
		n을 입력 받아 다음과 같이 출력하도록 프로그램을 작성하라.
		ex > n = 3
				1
			1	2	1
		1	2	4	2	1
	1	2	4	8	4	2	1	*/

	int n, cnt = 1;

	cout << "n = ";
	cin >> n;
	
	for (int i = 0; i <= n; i++)
	{
		for (int j = 0; j <= n * 2; j++)
		{
			if (j >= n - i && j <= n + i)
			{
				cout << cnt << " ";
				if (j < n) cnt *= 2;
				else if(cnt != 1 && j >= n) cnt /= 2;
			}
			else
			{
				cout << "  ";
			}
		}
		cout << endl;
	}

	return 0;
}