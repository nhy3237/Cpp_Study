#include <iostream>

using namespace std;
int solution(unsigned int l, int* v);

int main()
{
	// ������ �¿����� ���� �� �ִ� ���� d
	// ��� ���ε�� d ���� ���� ������ �޾ƾ� ��
	// ��ο� �κ��� �־�� �� �ȴ�.

	// ���ο� ������ ���̰� L
	// �� n ���� ���ε�

	// d �� �� �ּڰ��� ����
	
	// �Է� : ��ü ���� ���� l, �迭 v 

	unsigned int l, n;

	cout << "��ü ������ ����: "; cin >> l;
	int* v = new int[l + 1];

	cout << "���� ���� �� �ִ� ����: " << solution(l, v);//totCnt / 2 + 1;

	delete[]v;
	
	return 0;
}

int solution(unsigned int l, int* v)
{
	int d = 0, n;

	int* v2 = new int[l + 1];

	cout << "���ε��� ����: "; cin >> n;
	cout << "���ε��� ������ ��ġ �迭: ";
	for (int i = 0; i <= l; i++)
	{
		v2[i] = 0;
	}

	for (int i = 0; i < n; i++)
	{
		cin >> v[i];
		v2[v[i]] = 1;
	}

	int cnt = 0;

	for (int i = 0; i <= l; i++)
	{
		if (v2[i] == 0)
		{
			cnt++;
		}
		else
		{
			if (cnt > d)
			{
				d = cnt;
			}
			cnt = 0;
		}
	}
	delete[]v2;
	return d / 2 + 1;
}