#include <iostream>
#include <cmath>

using namespace std;

int main()
{
	/*
	Q1. ������ ���� ���·� ����ϴ� ���α׷��� �ۼ��϶�.
		n�� �Է� �޾� ������ ���� ����ϵ��� ���α׷��� �ۼ��϶�.
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