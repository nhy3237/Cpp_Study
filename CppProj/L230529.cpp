#include <iostream>

int main()
{
	using namespace std;
	int x;

	cout << "���� ǥ���� x = 100�� ���� ";
	cout << (x = 100) << endl;
	cout << "���� x�� ���� " << x << endl;
	cout << "���� ǥ���� x < 3�� �������� ";
	cout << (x < 3) << endl;
	cout << "���� ǥ���� x > 3�� �������� ";
	cout << (x > 3) << endl;
	cout.setf(ios_base::boolalpha);
	cout << "���� ǥ���� x < 3�� bool���� ";
	cout << (x < 3) << endl;
	cout << "���� ǥ���� x > 3�� bool���� ";
	cout << (x > 3) << endl;

	//p264. ���ڿ� �� �Ұ���
	char word[20] = "mate";

	if (word == "mate")
	{
		cout << "true";
	}
	else
	{
		cout << "false";
	}

	//����
	strcmp(word, "mate");
	string word2 = "mate";
	if (word2 == "mate")
	{
		cout << "true";
	}
	else
	{
		cout << "false";
	}

	// 5.16) while ������ ���� �б�
	char ch;
	int count = 0;
	cout << "���ڵ��� �Է��Ͻÿ�; �������� #�� �Է��Ͻÿ�:\n";
	//cin >> ch;
	cin.get(ch);
	while (ch != '#')
	{
		cout << ch;
		++count;
		//cin >> ch;
		cin.get(ch);
	}
	cout << endl << count << " ���ڸ� �о����ϴ�.\n";

	return 0;
}