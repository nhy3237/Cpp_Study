#include <iostream>

int main()
{
	/*Q1. �ﰢ���� 3���� �� (x1, y1), (x2, y2), (x3, y3)��
		  �˰� ���� �� �� �ﰢ���� ������ ���ϴ� ���α׷��� �ۼ��϶�.
		  ex> �� �� �Է� : 1.5 -3.4 4.6 5 9.5 -3.4
			  �ﰢ���� ���� : 33.6 */

			  /*using namespace std;
			  double x1, x2, x3, y1, y2, y3, res;

			  cout << "�� �� �Է� : ";
			  cin >> x1 >> y1 >> x2 >> y2 >> x3 >> y3;

			  res = ((x1 * y2 + x2 * y3 + x3 * y1) - (x2 * y1 + x3 * y2 + x1 * y3)) / 2;

			  if (res < 0)
			  {
				  res *= -1;
			  }

			  cout << "�ﰢ���� ���� : " << res << endl;*/

			  /*
			  Q2. ���ӿ��� ��й�ȣ�� � ��Ģ�� �䱸�ϴ� ��찡 �ִ�.
				  ������ ���� ��й�ȣ�� ������ �Ѵٰ� ����
				  1. ��й�ȣ�� ��� 8���� ���ڿ��� �Ѵ�.
				  2. ��й�ȣ�� ���ڿ� ���ڷθ� �����Ǿ�� �Ѵ�.
				  3. ��й�ȣ�� ��� �� ���� ���ڰ� ���ԵǾ�� �Ѵ�.
				  ����ڰ� ��й�ȣ�� �Է����� ��,
				  �� ��Ģ�� ������ "Valid password"��
				  �׷��� ������ "Invalid password"�� ����ϴ� ���α׷��� �ۼ��϶�. */
	using namespace std;

	string password;
	int count = 0, flag = 1;

	cout << "��й�ȣ�� �Է��Ͻʽÿ�.\n";
	cin >> password;

	// 1. ��й�ȣ�� ��� 8���� ���ڿ��� �Ѵ�.
	if (password.size() < 8)
	{
		flag = 0;
		printf("8�� �̻��� ��й�ȣ�� �Է��ؾ� �մϴ�.\n");
	}

	// 2. ��й�ȣ�� ���ڿ� ���ڷθ� �����Ǿ�� �Ѵ�.
	if (flag == 1)
	{
		for (int i = 0; i < password.size(); i++)
		{
			if (!isalnum(password[i]))
			{
				flag = 0;
				printf("���ڿ� ���ڷθ� �����Ǿ�� �մϴ�.\n");
				break;
			}
		}
	}

	// 3. ��й�ȣ�� ��� �� ���� ���ڰ� ���ԵǾ�� �Ѵ�.
	if (flag == 1)
	{
		for (int i = 0; i < password.size(); i++)
		{
			if (isdigit(password[i]))
			{
				count++;
			}
		}

		if (count < 2)
		{
			flag = 0;
			printf("��� �� ���� ���ڰ� ���ԵǾ�� �մϴ�.\n");
		}
	}

	if (flag == 1)
	{
		cout << "Valid password\n";
	}
	else 
	{
		cout << "Invalid password\n";
	}

	return 0;
}