#pragma once

#include <string>

class Stock
{
private:
	std::string company;
	long shares;
	double share_val;
	double total_val;
	void set_tot() { total_val = shares * share_val; }
public:
	Stock();	// 디폴트 생성자
	Stock(const std::string& co, long n = 0, double pr = 0.0);
	~Stock();	// 파괴자
	void acquire(const std::string& co, long n, double pr);
	void buy(long num, double price);
	void sell(long num, double price);
	void update(double price);
	void show();
	const Stock& topval(const Stock& s)const;
};