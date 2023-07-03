#include <iostream>
#include <fstream>
#include <cstdlib>

const int strsize = 60;

struct bop
{
	char fullname[strsize];	// �Ǹ�
	char title[strsize];	// ����
	char bopname[strsize];	// BOP ���̵�
	int preference;			// 0 = ȸ�� ���, 1 = fullname, 2 = title, 3 = bopname;
};

int regist();

int main()
{
	/* Q1. ������� ���ӵ� a�� �̷��ӵ� v�� �־����� ��,
		   ����Ⱑ �̷��ϱ� ���� �ּ� Ȱ�� ���̸� ����ϴ�
		   ���α׷��� �ۼ��϶�.
		    ���� = v^2 / 2a
		   ����ڿ��� m/s ������ v�� m/s^2 ������ a�� �Է��ϵ���
		   �˷��ְ�, �ּ� Ȱ�� ���̸� ����ϴ� ���α׷��� �ۼ�.
		   ex > Speed and Accelation : 60 3.5
				Minimum runway length : 514.286 */

	/*int Speed;
	double Accelation;

	using namespace std;
	cout << "Speed and Accelation : ";
	cin >> Speed;
	cin >> Accelation;

	cout << "Minimum runway length : " << Speed * Speed / (2 * Accelation);*/

	/* Q2. ���� (x1, y1), (x2, y2) �� �Է¹޾� �� ���� ������ �Ÿ��� ����ϴ�
		   ���α׷��� �ۼ�.
		   �Ÿ� ��� ������
			SQUARE ROOT( (x2-x1)^2 + (y2-y1)^2)*/

	/*using namespace std;
	double x1, x2, y1, y2, Distance;

	cout << "x1, y1 : ";
	cin >> x1 >> y1;
	
	cout << "x2, y2 : ";
	cin >> x2 >> y2;

	cout << "Distance : " << sqrt((x2 - x1) * (x2 - x1) + (y2 - y1) * (y2 - y1)) << endl;*/

	/*
	Q3. p368 4��
		a. ȸ�����
			�̸�, ����, bop id
		b. �Ǹ� ����
		c. ���� ����
		..
		q. ���� */
	char menu;
	int count = 0;

	bop* ps = new bop[count];

	using namespace std;

	cout << "Benevolent Order of Programmers\n\
a. ȸ�� ���(�̸�, ����, BOP ID)\nb. �Ǹ����� ����\tc. �������� ����\n\
d. BOP ���̵�� ����\te. ȸ���� ������ ������ ����\n\
q. ����\n\
���ϴ� ���� �����Ͻʽÿ�: ";

	cin >> menu;
	switch (menu)
	{
	case 'a':
		regist();
		break;
	case 'b':
		ps->preference = 1;
		break;
	case 'c':
		ps->preference = 2;
		break;
	case 'd':
		ps->preference = 3;
		break;
	case 'e':
		if (ps->preference != 1 && ps->preference != 2 && ps->preference != 3)
		{
			cout << "������ ���� ����� ��� �������� �����մϴ�.";
			ps->preference = 1;
		}
		break;
	case 'q': 
		exit(EXIT_SUCCESS); 
		break;
	}


	return 0;
}

int regist()
{

}