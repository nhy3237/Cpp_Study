#define _CRT_SECURE_NO_WARNINGS

#include <iostream>
#include <string>
#include <cstring>
#include <crtdbg.h>

using namespace std;

char* getname(void);

int main()
{
	// 04.4 getline() �Լ��� �� ���� �д´�.
	/*using namespace std;
	const int ArSize = 20;
	char name[ArSize];
	char dessert[ArSize];

	cout << "�̸��� �Է��Ͻʽÿ�:\n";
	cin.getline(name, ArSize);
	cout << "�����ϴ� ����Ʈ�� �Է��Ͻʽÿ�;\n";
	cin.getline(dessert, ArSize);
	cout << "���ִ� " << dessert;
	cout << " ����Ʈ�� �غ��ϰڽ��ϴ�. " << name << " ��!\n";*/

	// 04.5 get() & get() ���� ���� �ܾ �д´�.
	/*cout << "�̸��� �Է��Ͻʽÿ�:\n";
	cin.get(name, ArSize).get();
	cout << "�����ϴ� ����Ʈ�� �Է��Ͻʽÿ�;\n";
	cin.get(dessert, ArSize).get();
	cout << "���ִ� " << dessert;
	cout << " ����Ʈ�� �غ��ϰڽ��ϴ�. " << name << " ��!\n";*/

	// 04.6 ��ġ �Է� �ڿ� ���� ���ڿ� �Է�
	/*cout << "���� ��ô� ����Ʈ�� ���� �����ϼ̽��ϱ�?\n";
	int year;
	cin >> year;
	cout << "��ô� ���ø� ������ �ֽðڽ��ϱ�?\n";
	char address[80];
	cin.get(address, 80).get();
	cout << "����Ʈ ���� ����: " << year << endl;
	cout << "����: " << address << endl;
	cout << "����� �Ϸ�Ǿ����ϴ�!\n";*/

	// 04.9 String Ŭ������ ��Ÿ ���
	/*char charr1[20];
	char charr2[20] = "jaguar";
	string str1;
	string str2 = "panther";

	str1 = str2;
	strcpy(charr1, charr2);

	str1 += " paste";
	strcat(charr1, " juice");

	int len1 = str1.size();
	int len2 = strlen(charr1);
	
	cout << str1 << " ���ڿ����� "
		<< len1 << " ���� ���ڰ� ����ִ�.\n";
	cout << charr1 << " ���ڿ����� "
		<< len2 << " ���� ���ڰ� ����ִ�.\n";

	double* p3 = new double[3];

	p3[0] = 0.2;
	p3[1] = 0.5;
	p3[2] = 0.8;
	cout << "p3[1]�� " << p3[1] << "�Դϴ�.\n";
	p3 = p3 + 1;
	cout << "������ p3[0]�� " << p3[0] << "�̰�, ";
	cout << "p3[1]�� " << p3[1] << "�Դϴ�.\n";
	p3 = p3 - 1;
	cout << "������ p3[0]�� " << p3[0] << "�Դϴ�.\n\n";
	delete[] p3;*/

	//4.18 �迭�� ���� new ������ ���
	/*double wages[3] = { 10000.0, 20000.0, 30000.0 };
	short stacks[3] = { 3,2,1 };

	double* pw = wages;
	short* ps = &stacks[0];

	cout << "pw = " << pw << ", *pw = " << *pw << endl;
	pw = pw + 1;
	cout << "pw �����Ϳ� 1�� ����:\n";
	cout << "pw = " << pw << ", *pw = " << *pw << "\n\n";

	cout << "ps = " << ps << ", *ps = " << *ps << endl;
	ps = ps + 1;
	cout << "ps �����Ϳ� 1�� ����:\n";
	cout << "ps = " << ps << ", *ps = " << *ps << "\n\n";

	cout << "�迭 ǥ��� �� ���ҿ� ����\n";
	cout << "stacks[0] = " << stacks[0]
		<< ", stacks[1] = " << stacks[1] << endl;
	cout << "������ ǥ��� �� ���ҿ� ����\n";
	cout << "*stacks = " << *stacks
		<< ", *(stacks + 1) = " << *(stacks + 1) << endl;

	cout << sizeof(wages) << " = wages �迭�� ũ��\n";
	cout << sizeof(pw) << " = pw �������� ũ��\n\n";*/

	//04.20 ���ڿ��� �����ϴ� �������� ���
	/*char animal[20] = "bear";
	const char* bird = "wren";
	char* ps;
	
	cout << animal << " and ";
	cout << bird << "\n";

	cout << "������ ������ �Է��Ͻʽÿ�: ";
	cin >> animal;

	ps = animal;
	cout << ps << "s!\n";
	cout << "strcpy() ��� ��:\n";
	cout << (int*)animal << ": " << animal << endl;
	cout << (int*)ps << ": " << ps << endl;

	ps = new char[strlen(animal) + 1];
	strcpy(ps, animal);
	cout << "strcpy() ��� ��: \n";
	cout << (int*)animal << ": " << animal << endl;
	cout << (int*)ps << ": " << ps << endl;
	delete[]ps;*/
	
	//04.22 delete ������ ���
	char* name;

	name = getname();
	cout << (int*)name << ": " << name << "\n";
	delete[]name;

	name = getname();
	cout << (int*)name << ": " << name << "\n";
	delete[]name;

	return 0;
}

char* getname()
{
	char temp[80];
	cout << "�̸��� �Է��Ͻʽÿ�: ";
	cin >> temp;
	char* pn = new char[strlen(temp) + 1];
	strcpy(pn, temp);

	return pn;
}