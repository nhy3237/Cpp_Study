#define _CRT_SECURE_NO_WARNINGS

#include <iostream>
#include <string>
#include <cstring>

using namespace std;

struct TCL
{
	string company;
	float diameter;
	float weight;
};

struct car
{
	char company[20];
	int year;
};

int main()
{
	// Q1. p232 �������� 7,8
	/*TCL *ps = new TCL;

	cout << "������ ���� : ";
	cin >> ps->diameter;
	cin.get();
	cout << "���� ȸ���� �̸� : ";
	getline(cin, ps->company);
	cout << "������ �߷� : ";
	cin >> ps->weight;

	cout << "\n" << ps->company << "ȸ���� ���� ������ " << ps->diameter << "�̰�, �߷��� " << ps->weight << "�Դϴ�.\n\n";

	delete ps;*/

	/* Q2. �ܾ �Է¹޾Ƽ� ȸ������ ���θ� �Ǵ��ؼ� ����� ����ϴ� ���α׷��� �ۼ��϶�. */
	/*string word, temp;
	
	int num = 0;

	cout << "�ܾ �Է� : ";
	cin >> word;
	
	temp = word;

	for (int i = word.size() - 1; i >= 0; i--)
	{
		temp[num] = word[i];
		num++;
	}

	if (temp == word)
	{
		cout << word << " �� ȸ���Դϴ�.\n";
	}
	else
	{
		cout << word << " �� ȸ���� �ƴմϴ�.\n";

	}*/

	/* Q3. 1~10 ������ ������ �Է¹޾� ������ ���� ���·� ����ϴ� ���α׷��� �ۼ��϶�.
		���� ���� �Է� : 5
		 1
		212
	   32123
	  4321234
	 543212345 */

	//int row, col, mid, num; //��, ��, �� �߰�, ��°� 

	//cout << "���� ���� �Է� : ";
	//cin >> row;

	//col = row * 2 - 1;
	//mid = row - 1;

	////��
	//for (int i = 0; i < row; i++)
	//{
	//	num = i + 1;

	//	//��
	//	for (int j = 0; j < col; j++)
	//	{
	//		if (mid - i <= j && mid + i >= j)
	//		{
	//			cout << num;
	//			if (num > 1 && j <= mid)
	//			{
	//				num--;
	//			}
	//			else
	//			{
	//				num++;
	//			}
	//		}
	//		else
	//		{
	//			cout << " ";
	//		}
	//	}
	//	cout << "\n";
	//}

	// Q4. p305 �������� 7
	/*int numCar;
	
	cout << "�� ���� ���� ������� �����Ͻðڽ��ϱ�? ";
	cin >> numCar;

	car* ps = new car[numCar];

	for (int i = 0; i < numCar; i++)
	{
		cout << "�ڵ��� #" << i + 1 << ":\n";
		cout << "���۾�ü: ";
		cin >> ps[i].company;
		cout << "���۳⵵: ";
		cin >> ps[i].year;
	}

	cout << "���� ���ϰ� �����ϰ� �ִ� �ڵ��� ����� ������ �����ϴ�.\n";
	for (int i = 0; i < numCar; i++)
	{
		cout << ps[i].year << "���� " << ps[i].company << "\n";
	}*/

	// Q5. p305 �������� 8
	char word[20];
	int count = 0;

	cout << "���� �ܾ���� �Է��Ͻʽÿ� (�������� done�� �Է�) :\n";

	while (1)
	{
		cin >> word;

		if (strcmp(word, "done") == 0)
		{
			break;
		}
		count++;
	}
	
	cout << "�� " << count << " �ܾ �ԷµǾ����ϴ�.\n";

	return 0;
}