#include <iostream>
#include "account.h"

int main()
{
	BankAccount bankA("NamHuiYeong", "1234-567-894");
	bankA.show();
	bankA.deposit(1000); 
	bankA.show();
	bankA.withdraw(800);
	bankA.show();
	bankA.withdraw(500);
	bankA.show();
	bankA.deposit(-1);
	bankA.show();
	bankA.deposit(500000);
	bankA.show();
	return 0;
}