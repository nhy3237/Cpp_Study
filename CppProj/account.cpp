#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include "account.h"

// 객체를 생성하고 초기화 (예금주의 이름, 계좌 번호, 잔액)
BankAccount::BankAccount(const char* client, const char* num, double bal)
{
	strcpy(name, client);
	strcpy(acctnum, num);
	balance = bal;
}

// 예금주의 이름, 계좌 번호, 잔액 출력
void BankAccount::show(void)const
{
	using std::cout;
	cout << "예금주의 이름: " << name << '\n'
		<< " 계좌 번호: " << acctnum << '\n'
		<< " 잔액 : " << balance << "\n\n";
}

// 입금
void BankAccount::deposit(double cash) 
{
	using std::cout;
	
	if (cash < 0)
	{
		cout << "<입금액 : " << cash << ">  입금 할 수 없는 금액입니다.\n";
	}
	else
	{
		cout << "<입금액 : " << cash << ">\n";
		balance += cash;
	}
}

// 출금
void BankAccount::withdraw(double cash) 
{
	using std::cout;
	if (cash > balance)
	{
		cout << "<출금액 : " << cash << "> 출금할 수 있는 금액을 초과했습니다.\n";
	}
	else
	{
		cout << "<출금액 : " << cash << ">\n";
		balance -= cash;
	}
}