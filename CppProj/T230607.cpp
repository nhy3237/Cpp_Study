#include <iostream>

using namespace std;

int main()
{
	/*
	Q1. ������ �鸸 �� ������ ���� �ùķ��̼��ϰ�
		�ո�� �޸��� ���� ����ϴ� ���α׷��� �ۼ��϶�.
		������ ���� �� �յڰ� �� %�� �������� ����� ����϶�
		ex>
			100 ��° �� �� .. �ո� oo% �޸� oo%
			...
			1000 ��° �� �� .. �ո� oo% �޸� oo%
			...
			1000000 ��° �� �� .. (100�� ������) */

	/*srand(time(NULL));
	int front = 0, i = 1;

	for (int n = 100; n <= 1000000; n *= 10)
	{
		for (i -= 1; i < n; i++)
		{
			if (rand() % 2 == 1)
			{
				front++;
			}
		}
		cout << n << "��° �� �� .. �ո�" << float(front) / n * 100 << "% �޸� " << float(n - front) / n * 100 << "%\n";
	}*/
	/*
	Q2. ������ ����� ������ ���� ��
		���			������		Ȯ��		������		Ȯ��
		------------------------------------------------
		5star		A-Item		1%
		------------------------------------------------
		4star		B-Item		3%		C-Item		3%
		------------------------------------------------
		3star		D-Item		5%		E-Item		5%
					F-Item		5%
		------------------------------------------------
		2star		G-Item		10%		H-Item		10%
					I-Item		10%		J-Item		10%
		------------------------------------------------
		1star		K-Item		38%		
		------------------------------------------------
		�� �������� ������ Ȯ���� �°� ��Ȯ�� ���� �� �ֵ��� ���α׷��� �ۼ��Ͻÿ�.
		ex > Ƚ�� ? 100		A:1, B:3, C:3, D:5 .........
			 Ƚ�� ? 1000		A:10, B:30, C:30, D:50 ........ */
	/*int item[11] = { 0 };
	int begin[11] = { 1,3,3,5,5,5,10,10,10,10,38 };
	int n = 100;

	srand(time(NULL));

	for (int i = 1; i <= 1000000; i++)
	{
		int temp = rand() % 11;

		if (item[temp] == begin[temp] * n / 100)
		{
			i--;
			continue;
		}
		item[temp]++;

		if (i == n)
		{
			cout << "Ƚ�� ? " << i << "\t";
			for (int j = 0; j <= 10; j++)
			{
				cout << (char)('A' + j) << ": " << item[j] << " ";
			}
			cout << endl;
			n *= 10;
		}
	}*/

	/*
	Q3. �б��� 100���� �繰�԰� 100���� �л��� �ִ�.
		��� �繰���� ù ������ ���� �ִ�.
		�л��� ���Ƿ� ���鼭
			s1�̶�� ù ��° �л��� ��� �繰���� ����.
			s2��� �� ��° �л��� L2���� �����Ͽ� 1���� 
				�ǳ� �ٸ鼭 �繰���� �ݴ´�.
			s3 ��� �� ��° �л��� L3���� �����Ͽ� 2����
				�ǳ� �ٸ鼭 �繰�� ���¸� �����Ѵ�. (���� <-> ����)
			s4 ��� �� ��° �л��� L4���� �����Ͽ� 3����
				�ǳ� �ٸ鼭 �繰���� ���¸� �����Ѵ�. (���� <-> ����)
			�л� s100�� L100�繰���� ������ �� ���� ��� �ȴ�.
		��� �л��� ������ ����ϰ� �� ����, � �繰���� �����ִ���,
		�����ִ� ��� �繰���� ��ȣ�� ����ϴ� ���α׷��� �ۼ��϶�. */

	int locker[100] = { 0 }; // 0 ���� 1 ����
	
	for (int s = 0; s < 100; s++)
	{
		for (int L = s; L < 100; L += s + 1)
		{
			if (locker[L] == 0)
			{
				locker[L] = 1;
			}
			else
			{
				locker[L] = 0;
			}
		}
	}

	for (int L = 0; L < 100; L++)
	{
		if (locker[L] == 1)
		{
			cout << "L" << L + 1 << " ";
		}
	}
	return 0;
}