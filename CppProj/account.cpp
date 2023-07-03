#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include "account.h"

// ��ü�� �����ϰ� �ʱ�ȭ (�������� �̸�, ���� ��ȣ, �ܾ�)
BankAccount::BankAccount(const char* client, const char* num, double bal)
{
	strcpy(name, client);
	strcpy(acctnum, num);
	balance = bal;
}

// �������� �̸�, ���� ��ȣ, �ܾ� ���
void BankAccount::show(void)const
{
	using std::cout;
	cout << "�������� �̸�: " << name << '\n'
		<< " ���� ��ȣ: " << acctnum << '\n'
		<< " �ܾ� : " << balance << "\n\n";
}

// �Ա�
void BankAccount::deposit(double cash) 
{
	using std::cout;
	
	if (cash < 0)
	{
		cout << "<�Աݾ� : " << cash << ">  �Ա� �� �� ���� �ݾ��Դϴ�.\n";
	}
	else
	{
		cout << "<�Աݾ� : " << cash << ">\n";
		balance += cash;
	}
}

// ���
void BankAccount::withdraw(double cash) 
{
	using std::cout;
	if (cash > balance)
	{
		cout << "<��ݾ� : " << cash << "> ����� �� �ִ� �ݾ��� �ʰ��߽��ϴ�.\n";
	}
	else
	{
		cout << "<��ݾ� : " << cash << ">\n";
		balance -= cash;
	}
}